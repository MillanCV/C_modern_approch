# Expresiones

C muestra un gran enfasis en las expresiones en vez de las instrucciones.
Son expresiones las variables y las constantes. Una variablre representa un valor que debe ser calculado durante la ejecucion. Una constante es un valor que no cambia. 
Expresiones mas complejas aplican operadores a operandos. Los opereradores son las herramientas basias para construir expresiones. Hay muchos en C, aritmeticos, relacionales, logicos, de expresion... 

## Operadores aritmeticos

Sumas, restas, multiplicaciones, divisiones... Binarios o unarios
Requiere tener cuidado:
* / si los operandos son enteros, trunca el resultado eliminando la parte decimal
* % requiere operandos enteros
* / %, usar cero como denominador causa comportamiento indefinido
* / %, con operandos negativos es complejo
* Las reglas de precedencia son complejas, mejor usar parentesis.

## Operadores de asignacion

A menudo un valor calculado debe almacenarse en una variable para ser usado mas adelante. El operador de asignacion = hace el servicio.
Para actualizar el valor almacenado en un variable existen un conjunto de operadores de asignacion compuestos.

#### Operacion de asignacion simple =

v = e

evalua la expresion e y copia su valor en v. 
* 'e' puede ser una constante, una variable o una expresion mas complicada. 
* Si 'e' no tiene el mismo tipo que 'v', 'e' es convertida al tipo correspondiente

Mientras que en otros lenguajes la asignacion es una instruccion, en C es un operador, produce un resultado.
El resultado de 'v = e' es igual a v despues de la asignacion.

El hecho de que un operador modifique el valor de un operando significa que se produce un efecto lateral.

Ya que es un operador permite encadenar varias asignaciones juntas.

##### Lvalues

La mayoria de operadores require que los operandos sean variables, constantes o expresiones. El operador de asignacion requiere un lvalue como operador izquierdo.
Un lvalue representa un objeto almacenado en la memoria, no es una constante o el resultado de una computacion. Las variables son lvalues. Mas adelante se ven otras.

##### Asignacion compuesta

Es comun usar, en una asignacion, el valor viejo de una variable para calcular el nuevo 'i = i +1', lo que es equivalente a 'i += 2'
Hay nueve operadores que permiten hacer esto..
Hay un problema con los operadores compuestos que tiene que ver con que varia la precedencia.

## Operadores de incremento y decremento

++i, i++, --i, i++

Anaden o restan 1. Elegir prefijo o posfijo puede afectar a que un programa sea correcto. Tienen efectos laterales.

++i, calcula i + 1 y como efecto lateral varia i.
ii+, calcula i + 1 y posteriormente varia i

El incremente posterior no esta especificado por el C standar, pero se asume que sera en la siguiente instruccion.

## Evaluacion de expresiones

No se puede saber el orden en que una subexpresion sera evaludado.
'(a + b) * (c + d)'. No se sabe cual de las dos sera evaluada primero
c = (b = a + 2) - (a = 1), aqui afecta al resultado.

## Expression statements (instrucciones expresion)

Cualquier expresion en C, puede ser usada como instruccion anadiendo punto y coma;