// ham kiem tra du lieu dang ky tai khoan moi co hop le ko ?
function fnKiemTra(ev){
    ev.preventDefault(); //vo hieu hoa chuc nang chuyen trang action

    //khai bao mang a[] chua du lieu nhap trong form dang ky
    const a=["Thong tin tom tat\n==========="];

    //lay dc email kiem tra
    let email = document.getElementById("email").value.trim();
    let pattern = /^[a-z0-9]{2,20}@([a-z0-9]{2,10}\.)+[a-z]{2,4}$/i;

    if(pattern.test(email)){
        console.log(`email : ${email}`);
        a.push(`email : ${email}`);
    }
    else{
        alert(" >> INVALID EMAIL: PLZ RE-ENTER ! ");
        document.getElementById("email").focus();
        return;
    }

    let gender= document.getElementById("gMale").checked ? "male":"female";
    console.log(`gender :   ${gender}`);
    a.push(`gender :   ${gender}`);

    let location = document.getElementById("location").value;
    console.log(`location :   ${location}`);
    a.push(`location :   ${location}`);

    let dob = document.getElementById("dob").value;
    console.log(`dob :   ${dob}`);
    a.push(`dob :   ${dob}`);
    let yearDOB = new Date(dob).getFullYear();
    let year = new Date().getFullYear();
    if((year-yearDOB)<18){
        alert(" >> YOU ARE SO YOUNG !\n >> RETURN HOME !");
        return;
    }

    alert(a.join("\n"));
}