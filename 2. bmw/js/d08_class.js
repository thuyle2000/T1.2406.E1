// demo class
class Member {
    constructor(id, name, yob, gender) {
        this.id = id;
        this.name = name;
        this.yob = yob;
        this.gender = gender;
    }

    toString = ()=>{
        const yy = new Date().getFullYear();
        return `id=${this.id}, ho ten=${this.name}, tuoi: ${yy-this.yob}, gioi tinh: ${this.gender?'nam':'nu'}`;
    } 
}

let m1 = new Member("M01","Nhat Minh",2006, true);
console.log(m1.toString());

let m2 = new Member("M02", "A Khang", 2007,false);
console.log(m2.toString());