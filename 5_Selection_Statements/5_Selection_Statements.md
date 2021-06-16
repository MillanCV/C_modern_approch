# Selection statements

C tiene muchos operadores pero pocos statements, declaraciones. Hasta ahora hemos visto return y la declaracion de expresiones.
La mayoria de statems caen dentro de tres categorias:

* Seleccion, que permiten escoger un recorrido de un conjunto de alternativas
* Iteracion, que permiten hacer loops
* Salto, como break, continue o goto, que causan saltos incondicionales a otras partes del programa.

Los otros statemenss son la delaracion compuesta y la declaracion nula, sin accion.

Aqui veremos la seleccion y el salto.Para usar if necesitamos expresiones logicas, condiciones que if puede testar.

## Expresiones logicas

Numerosas declaraciones deben testar el valor de una expresion para ver si es falsa o verdad. En c las comparaciones devuelven 0 o 1, ambos enteros.

Operadores relacionales:
>,<, <=, >=

Permiten comparar enteros y floats. Su precedencia es menor que los operadores aritmeticos. Y son asociativos a la izquierda.

i < j < k = ( i<j ) < k

#### Operadores de ecualidad

==, !=

#### Operadores logicos

!, &&, ||

&& y || hacen cortocircuito si su valor es cero, con lo que se ignora cualquier expresion que venga despues.

## The if statement

Permite elegir entre dos alternativas testando el valor de una expresion.

Comprobar que una variable cae dentro de un rango de valores.

if (0 <= i && i < n)
if (i < 0 || i <= n)

##### Declaraciones compuestas

Corchetes y a volar {
    statement 1;
    statement 2;
}

#### El operador condicional

`expr1 ? expr2 : expr3`

Es un operador unico ya que requiere tres operandos. Se lee, if expr1 then expr2, else expr3.

```c
    i = 1;
    j = 2;
    k = (i > j)? i : j;
    k = (i >= 0? i : 0) + j;
```

Es un operador peliagudo ya que dificulta la comprension de los programas. Se puede usar en las siguientes condiciones.

```c
    if (i > j)
        return i;
    else
        return j;

    return i > j ? i : j;
```

```c
    if (i > j)
        printf("%d\n", i);
    else
        printf("%d\n", j);

    printf("%d\n", i > j? i : j);
```

#### Booleans en C89

Dada la carencia de un tipo boolean, la solucion pasa por declarar un tipo entero y asignarle 0 o 1. Un problema derivado es la dificultad de entenderlo como un boolean, ya que no es obvio que solo se le puede asignar 0 o 1.
La mayoria de programadores prefiere definir macros con nombres como true o false

```c
#define TRUE 1
#define FALSE 0

int flag;

flag = TRUE;

if (flag == TRUE) ...

if (!flag) ... // Esta forma es mejor, concisa y funciona con valores diferents de 0 y 1
```

Se puede definir esto

```#define BOOL true```

#### booleans en C99

Existe el tipo _Bool.

```_Bool flag;```

Realmente es un entero, pero solo se le puede asignar 0 o 1. Si se intenta asignar 5, por ejemplo, se asigna 1. Se pueden hacer operaciones aritmeticas, imprimir, testar...

A mayores esta la cabecera <stdbool.h>, que aporta la macro ```bool``` que equivale a ```_Bool```.


## The switch statement

Es comun comparar una expresion con una serie de valores para ver cual encaja. Una alternativa a if, equivalente pero con otra legibilidad, es switch, que sustituye una cascada de if.

```c
    switch(grade){
        case 4:
            printf("algo);
            break;
        case 7:
            printf("otra cosa");
            break;
        default:
            printf("algo mas");
            break;
    }
```

La palabra switch debe ser seguida por una int expression en parentesis. Los caracteres son tratados como enteros. No aplica a floats y strings.
Cada caso se refiere a una expresion constante, no valdria n+10. 
El orden de casos no importa. No es neesario incluir un default.


