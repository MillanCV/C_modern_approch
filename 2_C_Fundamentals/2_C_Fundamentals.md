
# C Fundamentals

Para escribir el programa mas simple posible en C es necesario hacer uso de preprocessing directives, funciones, variables y statements. Y todo esto sin apenas usar boilerplate.

```c
    #include <stdio.h>

    int main() {
        printf ("hello, world!\n");
        return 0;
    }
```

### Compilacion y linkado

Para que la maquina entienda el codigo anterior es necesario procesarlo mediante tres programas

1. Preprocesador:
Atiende a los comandos que empiezan por #. Puede anadir y modificar el codigo.
2. Compilador:
Convierte el codigo en c a codigo maquina. 
3. Linker:
Combina el codigo creado por el compilador entre si y con cualquier otro codigo necesario para el ejecutable.

### Estructura basica

```c
    directivas

    int main(){
        statemes
    }
```

* Directivas: instrucciones para el preprocesador.
* Funciones: procedimientos o subrutinas. Pueden ser creadas por el programador o incluidas en librerias. Son una serie de instrucciones agrupadas.
* Statements: en otros lenguajes son instrucciones, son comandos que deben ser ejecutados.

### Comentarios

Es posible anadir comentarios que hagan mas legible la funcion del codigo al programador, evitando cripticismos

```c
/*  Name: hello.c                */
/*  Purpose: Print a hello worl  */
/*  Autor: Millan Castro         */

/*  Name: hello.c                
    Purpose: Print a hello worl  
    Autor: Millan Castro        */

/*  Name: hello.c                
    Purpose: Print a hello worl  
    Autor: Millan Castro         
*/

/**********************************
 *   Name: hello.c                *
 *   Purpose: Print a hello worl  *
 *   Autor: Millan Castro         *
 **********************************/

/*
 *   Name: hello.c                
 *   Purpose: Print a hello worl  
 *   Autor: Millan Castro         
 */

//   Name: hello.c                
//   Purpose: Print a hello worl  
//   Autor: Millan Castro         

int main(void)     /* Beggining of main program */
int main(void)     // Beggining of main program 
```

### Variables y asignacion

La mayoria de los programas necesitan hacer calculos para calcular su salida y para ello necesitan almacenar temporalmente datos. La localizacion de almacenamiento son las variables. Hay tres conceptos asociados a las variables que son fundamentales, el tipo, la declaracion y la asignacion.

* Tipo: 
  * Especifica el tipo de dato que la variable almacena, como int o float. 
  * Importancia capital, afecta a como se almacena, las operaciones permitidas y los valores maximos y minimos. Afecta al rendimiento, por ejemplo, float permite almacenar mas valores que un entero pero las operaciones sobre un float son mas costosas o pueden introducir errores de aproximacion.
* Declaracion: para usar una variable esta debe ser declarada. Primero se establece un tipo y despues un nombre.
*  Asignacion: es la definicion del valor de una variable. Una vez tiene un valor puede ser usada para hacer computaciones con ella o sobre ella.

### Imprimir variables

Vemos como imprimir int o float:

```c
    printf("%d", int);      // imprime int
    printf("%.2f", float);      // imprime float con dos decimales
```

### Inicializacion

Podemos encontrarnos que hay variables que se inicializan a cero y otras que no lo hacen. Intentar acceder a una variable no inicializada dara lugar a valores imprevisibles.
Se puede declarar una variable e inicializarla en la misma linea con lo que se llama un "inicializador".

### Leer input

Para leer datos de usuario es util la funcion `scanf()`. Al igual que con `printf()` es necesario especificar el formato, en este caso de lo que va a leer.

```c
scanf('%d', &i)   // lee un entero y lo almacena en la direccion donde esta i
```

El uso de scanf requiere controlar la introduccion de otros tipos de datos.

### Definir constantes

Es buena idea asignar un nombre a una constante. Se puede hacer con *Macro definitions*

`#define INCHES_PER_POUND 166`

El prepocesador substituira cualquier aparicion de la macro por el numero. El uso de mayusculas no es obligatorio pero es una convencion


### Identificadores

Los identificadores son nombres dados a variables, funciones, macros... Deben empezar con una letra o guion bajo y continuar con letras, guiones bajos o numeros.
C diferencia entre mayusculas y minusculas.

### Tokens

Se puede pensar en un programa en C como una serie de tokens, grupos de caracteres que no pueden ser cambiados sin que cambie su significado. Son tokens los identificadores, las palabras claves o los signos de puntuacion.

### Encontrar errores con gcc

-Wall
-W
-pedantic
-ansi
-std=c89
-std=c99


