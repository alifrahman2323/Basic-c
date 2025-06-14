"use strict";
function printName(firstName, lastName = "Test"){
    console.log('Hello ${firstName} ${lastName}');
}
printName("Alif ", "Rahman");