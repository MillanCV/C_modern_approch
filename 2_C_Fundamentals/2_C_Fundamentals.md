
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
