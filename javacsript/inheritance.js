class Pet {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }
    eat() {
        return `${this.name} is eating!`;
    }
}

class Cat extends Pet{
    constructor(name,age,livesLeft=9){
        super(name,age)//calls parent constructor;
        this.livesLeft=livesLeft;
    }
    meow() {
        return "Meowwwww";
    }
}

class Dog extends Pet{

    bark() {
        return "Woof";
    }
    eat(){
        return `${this.name}  scarfs his food!`;
    }
}