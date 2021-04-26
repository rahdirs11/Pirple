'use strict';

let isPrime = number => {
    for (let i = 2; i <= Math.ceil(Math.sqrt(number)); ++i) {
        if (number % i === 0) {
            return false
        }
    }
    return true
}


let fizzBuzz = () => {
    let output = ""
    for (let i = 1; i < 51; ++i) {
        output = ""
        if (i % 3 === 0) {
            output += "Fizz"
        }
        if (i % 5 === 0) {
            output += "Buzz"
        }

        if (i != 1 && isPrime(i)) {
            output += "Prime"
        }

        console.log((output.length === 0? i: output))
    }
}


fizzBuzz()
