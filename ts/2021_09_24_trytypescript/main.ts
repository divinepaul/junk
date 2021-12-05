type Single = number
type Multiple = number | string

// trying interface 
interface Point {
    x: number;
    y: Single;
}

enum Well {
    Left,
    Right,
    Up,
    Down
}

let num: Single = 23;
let numMul: Multiple = 23;
let numMul2: Multiple = "string";
let tryAny : any = 123; 

let asserted = tryAny as number;
// asserted = "string";

let x0:Point = { x: 23, y: 2};
let points: Point[] = [];

for (let i = 0; i < 20; i++) {
    points[i] = { x: Math.random() , y: Math.random() };    
}

function PrintSingle(x:Single):void {
    console.log("The number is " + x);
}

console.log(points);
// PrintPoint(23);

PrintSingle(num);

class Cordinate {
    x: number;
    y: number;
    readonly z: number;
    constructor(x:number, y:number,z:number) {
        this.x = x;
        this.y = y;
        this.z = z;
    }
    output():void {
        // let cantuse = 23;
        console.log(`x: ${this.x},y: ${this.y},z: ${this.z}`);
    }
}

function genericArrayPush<T>(arr: T[],num: T): T[] {
    arr.push(num);
    return arr;
}

let cord = new Cordinate(23,23,23);
let someArray: Single[] = [23,23,23,23];
let someArray2: Multiple[] = [23,"string",23,23];

someArray = genericArrayPush(someArray,5);
someArray2 = genericArrayPush(someArray2,"hey");

console.log(someArray);
console.log(someArray2);
// cord.z = 23;
cord.output();
console.log(Well.Left);
console.log(Well.Up);
console.log(Well.Down);
