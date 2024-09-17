import { useState } from "react";
import { useNavigate } from "react-router-dom";

function EmployeeCreate({db}) {
    const formStyle = {       
            width: 'fit-content',
            padding: '10px 40px',
            boxShadow: '3px 3px 3px gray',
            margin: '30px',
            backgroundColor: 'azure'
    }

    const location = useNavigate();

    let [id, setID] = useState("E00");
    let [name, setName] = useState("Nguyen Tan Dat");
    let [gender, setGender] = useState("male");
    let [salary, setSalary] = useState(500);

    //ham xu ly submit du lieu input tren form
    const fnSave = (ev) =>{
        ev.preventDefault();

        let newItem = {"id":id, "name":name, "gender":gender, "salary":salary};
        db.push(newItem);

        alert("Create new Employee successfully !");

        location("/employee-index");
    }


    return (
        <form action="" style={formStyle} onSubmit={(ev)=>fnSave(ev)}>
            <h3>Create New Employee</h3>
            <hr />
            <div class="mb-3 mt-3">
                <label for="id" class="form-label">ID:</label>
                <input type="text" class="form-control" id="id" 
                    placeholder="Enter Employee ID" name="id"
                    pattern="E\d{2}"
                    required
                    onChange={(ev)=>setID(ev.target.value)}
                    />
            </div>

            <div class="mb-3 mt-3">
                <label for="name" class="form-label">Name:</label>
                <input type="text" class="form-control" id="name" 
                    placeholder="Enter Employee Name" name="name" required
                    onChange={(ev)=>setName(ev.target.value)}
                />
            </div>


            <div class="mb-3 mt-3">
                <label for="gender" class="form-label">Gender:</label>
                <input type="text" class="form-control" id="gender" 
                    placeholder="Enter (male|female)" name="gender"
                    pattern="(male|female)"
                    required 
                    onChange={(ev)=>setGender(ev.target.value)}
                />
            </div>


            <div class="mb-3 mt-3">
                <label for="salary" class="form-label">Salary</label>
                <input type="number" class="form-control" id="salary" 
                    placeholder="Enter Salary" name="salary"
                    value={salary} min="0" max="10000" required
                    onChange={(ev)=>setSalary(ev.target.value)} />
            </div>

            <div class="mb-3 mt-3">
                <button type="submit" class="btn btn-danger">Submit</button>
                <button type="reset" class="btn btn-info">Reset</button>
            </div>

        </form>);
}

export default EmployeeCreate;