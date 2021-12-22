Cada funcion es un pequeño programa, con sus declaraciones y statements. Permiten dividir el programa en piezas pequeñas, faciles de entender y modificar. Tambien permiten evitar duplicar codigo que sea usado mas de una vez. Son reusables en otros programas.

# Definir y llamar funciones

Si vemos que la libreria de C no tiene una funcion como "average", podemos definir una propia

```c
    double average(double a, double b)
    {
        return (a + b) / 2
    }
```

En esta funcion, la palabra double es el 'tipo de retorno', a y b son los identificadores que representan dos numeros que son pasados a la funcion al llamarlo. Cada parametro debe tener un tipo. Los parametros son varianles cuyo valor inicial es aportado cuando la funcion es llamada.
Cada funcion tiene un cuerpo, la parte ejecutable.
Para llamar a la funcion escribimos su numbre seguido por una serie de argumentos. Los argumentos deben ser expresiones compatibles con el tipo de datos declarados.
Si queremos que una funcion no devuelva nada debemos indicar que el tipo devuelto es void.

## Definicion de funciones

Tipo de retorno:
    * No pueden devolver arrays
    * Especificar void indica que no devuelve un valor
    * En C99 es ilegal omitir el valor de retorno, en c89 se entiende que es int.
    *Algunos programadores ponen el tipo de retorno en una linea superior, util si es muy largo.

Cuerpo:
    * Las variables pertenecen exclusivamente a la funcion. 
    * La declaracion de variables debe ser al princio del cuerpo en c89. En c99 declaracion de variables y statements pueden ir entremezclados.
    * Si el tipo de retorno es void, podemos dejar el cuerpo vacio.

## Llamando a funciones

Los valores devueltos pueden ser descartados si no asignamos la funcion a una variable. Podemos hacer mas explicito este descarte casteando la funcion.
```(void) printf("Hello World\n");```

# Declaracion de funciones o function prototypes

La definicion de una funcion puede ser anterior o posterior a su llamada, pero el compilador asumira que devuelve int si ve una llamada a una funcion que se define posteriormente. Crea asi una declaracion implicita de la funcion, haciendo promocion.
Para evitar estos problemas se puede ordenar el programa adecuadamente o declarar la funcion antes. Esta declaracion debe ser consistente con su definicion.
La declaracion de una funcion tb se conoce como prototipo. El prototipo aporta una descripcion de como se llama a la funcion, cuantos argumentos hay que enviar, que tipos deben tener y el valor que devuelve. No hace falta nombrar los argumentos.
En c99 debe haber una declaracion o una definicion de funcion antes de llamar, o el compilador dara error.

# Argumentos

Veamos la diferencia entre parametros y argumentos. Los parametros aparacen en la deficinicion de una funcion, como dummy names que representan valores que seran substituidos cuando la funcion sea llamada. Los argumentos son expresiones que aparecen en la llamada a funcion. 
En C los argumentos se pasan por valor. Cuando se llama una funcion, cada argumento es evaluado y asignado a un parametro. Cualquier cambio durante la ejecucion de la funcion solo afecta al parametro, no al argumento. Cada parametro se comporta como una variable.
Una ventaja de esto es que nos evitamos la declaracion de nuevas variables en el cuerpo de la funcion.
Como desventaja encontramos que es dificil devolver dos valores.

## Conversion de argumentos

C permite llamadas a funcion en la que el tipo del argumento no encaje con el tipo del parametro. Las reglas de conversion dependen si el compilador ha visto o no el prototipo de la funcion antes de la llamada.

- Si ha visto el prototipo: el valor de cada argumento es implicitamente convertido al tipo correspondiente.
- No ha visto el prototipo: se hace la promocion por defecto.

## Array arguments

A menudo se usan arrays como argumentos. Cuando un parametro es un array unidimensional no hace falta especificar la longitud del array.
Para que la funcion sepa que longitud tiene el array es necesario pasarle la longitud como argumento.

En el caso de un array sus elementos si son modificables dentro de la funcion.

Si un array es multidimensional solo se puede omitir la primera dimension. Si es bidimensional se debe especificar el numero de columnas.

## Arrays de longitud variable como argumentos (c99)

Se puede especificar con el siguiento prototipo

``` int sum_array(int n, int a[n])```

donde el orden de los parametros es obligatorio

## Usando static en array parameters (c99)

``` int sum_array(int a[static 3], int n) {}```

En este contexto static es una ayuda al compilador que le permite generar instrucciones mas rapidas para acceder al array. Si el compilador sabe que un array tiene un numero minimo de elementos puede ordenar para precargar estos elementos.
Si un array tiene mas de una dimension, static solo se puede usar en la primera.

## Literales compuestos (c99)

Para crear un array al vuelo y ser usado en una funcion

```total = sum_array((int []){3, 0, 3, 4, 1}, 5)```

Crea un array de enteros con cinco elemntos

# Return

Una funcion no void usa return para devolver un valor, como una constante o una variable o expresion compleja. Si el tipo de retorno no encaja con el tipo de la funcion se convierte de form aimplicita.

En funciones void puede haber return sin valor, lo que lleva a abandonar la funcion.

# Fin de programa

Main normalmente devuelve un int, aunque viejos programas lo omiten porque es su comportamiento por defecto.

Omitir el tipo de retorno en C99 no es legal. Se puede omitir void en los parametros de main aunque es mejor hacerlo explicito.

El valor de retorno de main es un codigo de estado que puede ser testado cuando el programa termina. Cero si termina normal y otro valor para indicar un comportamiento anormal.

## Funcion exit

Ejecutar un return en main es una forma de terminar el programa. Otra forma es llamar a la funcion exit de <stdlib.h>. Se le pasa como argumento el valor de finalizacion, exit(0) o exit(EXIT_SUCCESS), exit(EXIT_FAILURE). Estas ultimas son macros tambien definidas en <stdlib.h>.

# Recursion

Una funcion es recursiva cuando se llama a si misma en el cuerpo de la funcion. C permite la recursion, pero normalmente la mayoria de programas no la usan a menudo.

## Quicksort

Recursion es util cuando se usan algoritmos sofisticados que requieren funciones que se llamen a si mismas una o mas veces.

La recursion emerge naturalmente como resultado de disenar un algoritmo con la tecnica divide y venceras, en la que un problema grande es dividido en piezas mas pequenas. Quicksort es un ejemplo de este tipo de algoritmos.

# Q&A

* Es normal la confusion entre parametros y argumentos.
* Una funcion no puede ser definida en el cuerpo de otra funcion
* Si una llamada a funcion aparece sin parentesis esta es tratada por el compilador como un puntero a una funcion.
* Usar prototipos permite no llevar un orden estricto y permite que el compilador sepa donde estan las funciones en otros archivos
