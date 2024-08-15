const fnCheck = (event)=>{
    event.preventDefault();

    const name = document.getElementById("name").value.trim();
    let re = /^[a-z ]{3,30}$/i;
    if (re.test(name) == false) {
        alert("Invalid name ! Plz retry !");
        document.getElementById("name").focus();
        return;
    }

    const email = document.getElementById("email").value.trim();
    re = /^[a-z0-9]{2,20}@([a-z0-9]{2,10}\.)+[a-z]{2,4}$/i;

    if (re.test(email)==false) {
        alert(" >> Invalid email. Plz re-enter ! ");
        document.getElementById("email").focus();
        return;
    }

    const hear = document.getElementById("hear").value.trim();

    const a = ["Thank you !"];
    a.push("Summary of your Information");
    a.push("===========================");
    a.push(` name : ${name}`);
    a.push(` email : ${email}`);
    a.push(` hear from : ${hear}`);

    alert(a.join('\n'));
}