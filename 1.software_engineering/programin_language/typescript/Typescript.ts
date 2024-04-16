// const: cannot be reassignment
let firstName: string = "Dylan";
const keyName: string = "Svxaf"
firstName = "John"
// keyName = "BsaGf" ERROR



// Arrays
const names: string[] = [];
const read_names: readonly string[] = ["Dylan"];
// Tuples
let myTuple: [number, boolean, string] = [5, false, 'Coding God was here'];
// Destructuring Tuples
const [x, y] = myTuple;



// Object
const car: { type: string, model: string, year: number } = {
    type: "Toyota",
    model: "Corolla",
    year: 2009
  };


// Optional property ?
const myCar: { type: string, mileage?: number } = {
    type: "Toyota"
  };
myCar.mileage = 2000;


// Index Signatures
const nameAgeMap: { [index: string]: number } = {};
nameAgeMap.Jack = 25;


// Enum
enum StatusCodes {
  NotFound = 404,
  Success = 200,
  Accepted = 202,
  BadRequest = 400
}


// Type Aliases
type CarYear = number


// Interface
interface Rectangle {
  height: number,
  width: number
}


// Functions
function printHello(): void {
  console.log('Hello!');
}

function multiply(a: number, b: number) {
  return a * b;
}


// Classses
class Person {
  private name: string;

  public constructor(name: string) {
    this.name = name;
  }

  public getName(): string {
    return this.name;
  }
}

const person = new Person("Jane");
console.log(person.getName());



// Inheritance
interface Shape {
  getArea: () => number;
}

class Rectangle implements Shape {
  public constructor(width: number, height: number) {}

  public getArea(): number {
    return this.width * this.height;
  }
}

class Square extends Rectangle {
  public constructor(width: number) {
    super(width, width);
  }

  // getArea gets inherited from Rectangle
}