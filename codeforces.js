function cubeNumber(number) {
    if (isNaN(number)) {
        return "Input is not a valid number.";
    }
    const Number = parseFloat(number);
    if (Number <= 0) {
        return "Input must be a positive number.";
    }
    const Result = Math.pow(Number, 3);
    return Result;
}




function matchFinder(string1, string2) {
    if (typeof string1 !== 'string' || typeof string2 !== 'string') {
        return "Please Enter valid strings";
    }

    if (string1.includes(string2)) {
        return true;
    } else {
        return false;
    }
}





function sortMaker(arr) {
    if (arr[0] >= 0 && arr[1] >= 0) {
        if (arr[0] < arr[1]) {
            return [arr[1], arr[0]]
        }
        else if (arr[0] === arr[1]) {
            return "equal"
        }
        else {
            return [arr[0], arr[1]]
        }
    }
    else {
        return "Invalid Input"
    }

}


function findAddress(obj) {
    if (typeof obj !== "object") {
        return "please insert valid ";
    }
    else {
        const street = obj.street || "__";
        const house = obj.house || "__";
        const society = obj.society || "__";
        return street + "," + house + "," + society;
    }
}

const objArray = {

}


function canPay(changeArray, totalDue) {
    if (typeof changeArray !== 'undefined' && changeArray.length === 0) {
        return "Please enter the valid array"
    }
    else {
        let sum = 0;
        for (let i = 0; i < changeArray.length; i++) {
            sum += changeArray[i];
        }
        if (sum >= totalDue) {
            return true;
        }
        else {
            return false;
        }
    }
}



const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let n;
const edges = [];
rl.question('', (answer) => {
    n = parseInt(answer);
    rl.on('line', (line) => {
        const [a, b] = line.split(' ').map(Number);
        edges.push([a, b]);

        if (edges.length === n - 1) {
            constructTree();
            rl.close();
        }
    });
});
function constructTree() {
    for (let i = 1; i < n; i++) {
        console.log(i, i + 1);
    }
}


function recursion(params) {

    for (let first of second) { third }

}

function Tree(params) {
    
}
