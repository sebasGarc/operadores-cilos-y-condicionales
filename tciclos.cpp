#let se utiliza para crear una variable.
#console.log() sirve para mostrar información en la consola.


IF-IF
#se usa cuando queremos evaluar múltiples condiciones de manera independiente.
let numero = 12;

if (numero > 0) {
    console.log("El número es positivo");
}

if (numero % 2 === 0) {
    console.log("El número es par");
}

IF-ELSE
#se usa cuando queremos evaluar una condición y ejecutar un bloque de código si es verdadera, y otro bloque si es falsa.
let edad = 20;

if (edad >= 18) {
    console.log("Eres mayor de edad");
} else {
    console.log("Eres menor de edad");
}

ELSE IF 
#se usa cuando queremos evaluar múltiples condiciones de manera secuencial, ejecutando el bloque de código correspondiente a la primera condición verdadera.
let nota = 75;

if (nota >= 90) {
    console.log("Excelente");
} else if (nota >= 70) {
    console.log("Aprobado");
} else {
    console.log("Reprobado");
}

SWITCH CASE
#se usa cuando queremos evaluar una variable y ejecutar un bloque de código correspondiente a su valor, en lugar de usar múltiples sentencias if-else.
let opcion = 2;

switch (opcion) {
    case 1:
        console.log("Has elegido la opción 1");
        break;
    case 2:
        console.log("Has elegido la opción 2");
        break;
    case 3:
        console.log("Has elegido la opción 3");
        break;
    default:
        console.log("Opción no válida");
        break;
}

FOR
#Se usa cuando sabemos cuántas veces se repetirá algo.
for (let i = 1; i <= 5; i++) {
    console.log(i);
}
WHILE
#Se usa cuando la repetición depende de una condición.
let contador = 1;
while (contador <= 5) {
    console.log(contador);
    contador++;
}
DO-WHILE
#Se usa cuando queremos que el bloque de código se ejecute al menos una vez, independientemente de la condición.
let contador = 1;

do {
    console.log(contador);
    contador++;
} while (contador <= 5);
WHILE-TRUE
#Se usa cuando queremos que el bloque de código se ejecute indefinidamente hasta que se cumpla una condición de salida.
let contador = 1;

while (true) {
    console.log(contador);

    if (contador === 5) {
        break;
    }

    contador++;
}
