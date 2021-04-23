/*
-> In ES5, the only way to declare variables was by using 
   the keyword 'var'.
-> 'var' is function-scoped: available in the function they are
   declared, or if declared globally, it will be accessible anywhere
   throughout the code.
-> The naming conventions for variables are:
	=> Cannot start with numbers
	=> Cannot be keywords(predefined terms like if, function
	   true, false, var etc)
	=> Should start with either an alphabet or underscore 
	   and contain any number of underscores, letters and digits
-> 'let' and 'const' were introduced in ES6.
-> 'let' and 'const' are block-scoped: their visibility is only within the 
   block it was declared in.
-> Value of any variable declared as 'const' cannot be modified.
   It is used to store constants, whose value is NOT meant to change
   throughtout the execution of the program.
-> Variables declared in outer scope can be accessed from nested scope of 
   the former scope. The vice versa of this isn't possible.
-> Constants are generally declared in upper case letters.
*/

const PI = Math.PI
var name = 'Sridhar'
let age = 21
function greet() {
   // console.log(`Hello, ${name}! You are ${age}!`) // cannot use age variable here
   name = 'Antony'
   let age = 10
   console.log(`Hello, ${name}! You are ${age}!`)
}

greet()
console.log(`Value of var variable after function call: ${name}\nValue of let variable after function call: ${age}`)
// PI = 2 // this statement would give us an error as it is a constant and we cannot modify its value
console.log(PI)