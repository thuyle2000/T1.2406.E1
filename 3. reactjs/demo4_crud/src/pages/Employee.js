import { useState } from "react";

function Employee({ db }) {
    let [list, setList] = useState(db);

    let [searchName, setSearch] = useState("");

    //ham tim kiem nv theo ten duoc input trong o txtSearch
    const fnSearch = () => {
        let r = new RegExp(searchName,"i");
        setList(db.filter(item=>r.test(item.name)));
    }

    //ham xoa 1 nv theo ma so
    const fnRemove = (ma_nv) => {
        if(window.confirm("Are u sure ?")){
            setList(db.filter(item=> item.id!=ma_nv));

            //cap nhat lai noi dung cua bien tham so db
            let index = db.map(item=>item.id).indexOf(ma_nv);
            db.splice(index,1);
        }
    }
    
    return (
        <div>
            <h3>List of Employees</h3>
            <hr />

            <div className="mt-3 mb-3">

                <input type="text" name="txtSearch" 
                placeholder="input employee name" 
                onChange={(ev)=> setSearch(ev.target.value)}/>

                <button className="btn btn-warning" 
                        onClick={fnSearch}> Search </button>

            </div>

            <table className="table table-striped table-hover">
                <thead>
                    <tr>
                        <th>ID</th>
                        <th>Name</th>
                        <th>Gender</th>
                        <th>Salary</th>
                        <th>Action</th>
                    </tr>
                </thead>

                {/* danh sach nhan vien */}
                <tbody>
                    {
                        list.map(item =>
                            <tr>
                                <td>{item.id}</td>
                                <td>{item.name}</td>
                                <td>{item.gender}</td>
                                <td>{item.salary}</td>
                                <td>
                                    <button className="btn btn-primary"> detail </button>
                                    <button className="btn btn-warning"> update </button>

                                    <button className="btn btn-danger"
                                    onClick={()=>fnRemove(item.id)}
                                    > delete </button>
                                    
                                </td>
                            </tr>
                        )
                    }

                </tbody>
            </table>

        </div>
    );
}

export default Employee;