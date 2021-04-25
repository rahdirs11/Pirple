'use strict';

/*
Create a function called "timeAdder" that can add two time values together.
For example, it should be able to add 25 hours and 3 days together.

The function should accept 4 parameters:

value1, label1, value2, label2

- value1 and value2 should accept positive integers

- label1 and label2 should accept any of the following strings: "seconds",
    "minutes", "hours", "days", "second", "minute", "hour", "day"

For example your function may be called in any of the following ways:
timeAdder(1,"minute",3,"minutes")
timeAdder(5,"days",25,"hours")
timeAdder(1,"minute",240,"seconds")

================================================================================

Requirements:

1. Your function should include at least one switch

2. Your function must accept any possible combination of inputs

3. If the inputs are valid, it should return an array with 2 variables inside
of it: value3, and  label3. For example:

return [5,"minutes"];

The exact label you choose to return for label3 ("minutes" for example) is up to you.

4. If the inputs are invalid or impossible, it should return false. Here are
examples of impossible and invalid inputs:

timeAdder(5,"hour",5,"minutes") // This is impossible because "hour" is singular
and 5 is plural

timeAdder(false,false,5,"minutes") // This is invalid because the first 2 arguments
are not the correct types

timeAdder({},"days",5,"minutes") // This is invalid because the first argument is the wrong type

Extra Credit:

Rather than returning an arbitrary label for label3, return the largest label that
can be used with an integer value

For example if someone calls:

timeAdder(20,"hours",4,"hours")

You could return: [1,"day"] rather than [24,"hours"]

But if they called

timeAdder(20,"hours",5,"hours")

You would return [25,"hours"] because you could not use "days" with an integer
value to represent 25 hours.
*/

let isInvalidLabel = (value, label) => {
    if ((value > 1 && label.slice(-1).toLowerCase() != 's') || (value == 1 && label.slice(-1).toLowerCase() == 's')) {
        return true
    }
    return label.toLowerCase().indexOf('day') === -1 && label.toLowerCase().indexOf('minute') === -1 && label.toLowerCase().indexOf('second') === - 1 && label.toLowerCase().indexOf('hour') == -1
}


let convertToSeconds = (value, label) => {
    switch (label[0]) {
        case 'd':
        case 'D':
        // days
            value = value * 24 * 60 * 60
        break
        case 'h':
        case 'H':
        // hours
            value = value * 60 * 60
        break
        case 'm':
        case 'M':
        // minutes
            value = value * 60
        break
        case 's':
        case 'S':
        break
        // default:
        //     console.log('Invalid Label')
        //     return false
    }
    return value
}


let timeAdder = (value1, label1, value2, label2) => {
    if (value1 < 0 || value2 < 0 || typeof value1 != 'number' || typeof value2 != 'number') {
        return false
    }

    if (isInvalidLabel(value1, label1) || isInvalidLabel(value2, label2)) {
        return false
    }

    // console.log(`${value1} ${label1} => `)
    value1 = convertToSeconds(value1, label1)
    // console.log(`${value1} seconds\n${value2} ${label2} =>`)
    value2 = convertToSeconds(value2, label2)
    // console.log(`${value2} seconds`)
    // console.log('==============================================================')
    let totalSeconds = (value1 + value2)
    console.log(totalSeconds)
    const resultant = []
    if (totalSeconds < 60) {
        resultant.push(totalSeconds, totalSeconds != 1?'seconds': 'second')
    } else {
        let totalMinutes = totalSeconds / 60
        if (totalMinutes < 60) {
            resultant.push(totalMinutes, totalMinutes != 1? 'minutes': 'minute')
        } else {
            let totalHours = totalMinutes / 60
            if (totalHours < 24) {
                resultant.push(totalHours, totalHours != 1? 'hours': 'hour')
            } else {
                let totalDays = (totalHours / 8) / 3
                resultant.push(totalDays, totalDays != 1? 'days': 'day')
            }
        }
    }
    // console.log(resultant)
    return resultant
}

let result = timeAdder(5, 'days', 25, 'hours')
if (!result) {
    console.log('Invalid input')
} else {
    for (let value of result) {
        console.log(value)
    }
}
