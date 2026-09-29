//variaveis
x = 10
y = 2
soma = x + y
sub = x - y
mult = x * y 
div = x / y
resto = x % y 
raiz = Math.sqrt(x)
potencia = Math.pow (x, y)
// saidas com concatenação
console.log("A soma de " + x + "+" + y + " = " + soma)
console.log ("A subtração de " + x + " - " + y + " = " + sub)
// saidas com aspas simples (apostrofe)
console.log ('a multiplicação de ' + x + ' *' + y + ' = ' + sub)
console.log ('a divisão de ' + x + ' / ' + y + ' % ' + y + ' = ' + resto)
// saidas com template string (crase) 
console. log (`a raiz quadrada de ${x} = ${raiz}`)
console. log (`a potencia de ${x} elevado a ${y} = ${potencia}`)