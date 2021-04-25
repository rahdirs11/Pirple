'use strict';

function isMortal(name) {
  return typeof name === 'string' && name.toLowerCase() === 'socrates'
}

console.log(`Sridhar is ${isMortal('Sridhar')? "": "not "}a mortal!`)
console.log(`Socrates is ${isMortal('Socrates')? "": "not "}a mortal`)

function actualFlavor(cakes, isChocolate) {
  let flavors = "";
  for (let cake of cakes) {
    if (isChocolate === true && cake.toLowerCase() === 'chocolate') {
      flavors = flavors.concat(`${cake} is chocolate\n`)
    } else {
      flavors = flavors.concat(`${cake} is vanilla`)
    }
  }
  return flavors
}

console.log(actualFlavor(['chocolate', 'vanilla'], true))
