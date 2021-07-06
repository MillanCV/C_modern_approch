# Basic types

Hasta el momento solo hemos usado ```int``` y  ```float```. Hemos visto ```_Bool```, que es un tipo basico en C99. Aqui se describen el resto de tipos basicos y se discuten asuntos importantes sobre tipos en general. Se ven ```long, short, double```, characters, convert values from one type to another, typedef y sizeof.

# Integer types

Integers son numeros enteros. Pueden ser con signo o sin signo. Entre los bits que representan un numero entero, el que esta mas a la izquierda representa un signo si ha sido definido como ```signed integer```. Esto reduce el numero de enteros positivos que se pueden representar.
Un entero sin signo no puede representar numeros negativos, va desde el cero hasta el maximo disponible.
Un entero varia dependiendo de la arquitectura, 16bits, 32 bits, 64 bits...

Por defecto los enteros son ```signed```, por lo que no es necesario especificarlo.

Para conservar memoria o usar numeros mas grandes, podemos usar short integers o long integers, tambien dependientes de la arquitectura de la maquina. Esta permitido que short o long aparezcan de forma independiente y combinados con signed y unsigned.

De esta forma hay seis combinaciones posibles

int 
unsigned int

short int
short
unsigned short int
unsigned short

long int
long
unsigned long int
unsigned long

Si bien el rango de valores varia con la maquina, el valor mayor de un  int no puede ser menor que un short. Y un long nunca puede ser menor que el integer (no esta muy bien explicado LOL)

## Integer Types in C99

C99 introduce ```long long int``` y ```unsigned long long int```, para representar enteros muy grandes, especialmente de cara a las arquitecturas de 64 bits. Especificamente requieren que tengan un ancho de 64 bits. Las combinaciones originales permanecen como 'standad signed integer types' y 'standard unsigned integer types'.
Y anade 'extended integer types', pudiendo aportar ciertos compiladores enteros de 128 bits.

## Integer constants

Las constantes son numeros que aparecen en el texto de un programa, no son leidos, escritos o computados. C permite que las constantes sean escritas en decimal, octal o hexadecimal.

* Decimal:      15       255    32767
* Octal:        017    0377   077777 (Precedidos de 0)
* HEX:          0xff    0xfF    (Precedidos de 0x, case insensitive)

Las notaciones son intercambiables y combinables.

Las constantes decimales suelen ser de tipo int, pero si es necesario se le asigna un tipo long int. Si fuese demasiado largo el compilador intentaria usar unsigned long int.
Si son de tipo octal o hex, el compilador probara tambien con unsigned int.

Para forzar al compilador a tratar a una constante como long o como unsigned se puede anadir al final una l o L y una u o U.

15UL    0377lU

### Integer constant in C99

Aparecen LL y ll.
Cambian las reglas para asignar tipo.

### Integer overflow

Cuando las operaciones aritmeticas se realizan entre enteros es posible que el resultado sea demasiado grande como para representar. Si esto ocurre sucede un desbordamiento.
Cuando esto ocurre el resultado depende de que los enteros tengan signo.
Si son signed el comportamiento es indefinido.
Si son unsigned, el resultado es el correcto pero haciendole modulo 2^n, siendo n el numero de bits usados para almcenar n

### Reading and writing integers

Cuando imprimimos con %d, esto solo sirve para tipos int. Si es unsigned debe usarse u, o, x dependiendo de si es decimal, octal o hex.
Si es short se debe anteponer h antes de d, u, o, x
Si es long se debe anteponer l antes de d, u, o, x
Si es long long se antepone ll.


# Floating types

A veces es necesario almacenar numeros con digitos despues del punto decimal. Estos se almacenan en formato floating.
C tiene tres tipos floating diferentes

* float, single-precision
* double, precision- doble
* long-double, precision extendida.

cada uno aporta una precision mayor.

## Floating constants

Se pueden escribir de muchas formas:

```57.0 57. 57.0e0 57E0 5.7e1 5.7e+1 .57e2 570.e-1```

Debe contener una parte decimal y/o un exponent. El exponente indica la potencia de 10 por la cual el numero es escalarado. Si un exponente esta presente debe ser precedido por la letra e o E. + o - despues del exponente son posibles.

Por defecto se almacenan como doubles. Si es necesario double values se convierten automaticamente a float.
Cuando sea necesario forzar al compilador a almacenar float o long float se debe indicar con una F o f al funal de la constante.

## Leyendo y escribiendo floating-point numeros

* Para escribir y leer single-precision usamos %e, %f y %g.
* para leer doubles usamos scanf("%lf", &d)
* para escribir doubles se puede usar %e, %f y %g.
* para leer o escribir long doubles usamos %Lf, %Le o %Lg.

# Caracteres

El tercer tipo basico son los caracteres. Estos pueden variar de una maquina a otra, porque pueden tener diferentes sets de caracteres.

C trata los caracters como small integers. Cuando un caracter aparece en una computacion, C simplemente usa el valor entero.

Se pueden comparar igual que los numeros.

Se debe tener en cuenta que hacer operaciones aritmeticas sobre caracteres puede conducir a programas no portables, debido a que las maquinas pueden tener diferentes sets de caracteres.

## caracteres con signo y sin signo

Dado que c permite tratar los caracters como enteros, no sorprende que los caracteres puedan tener signo. Algunos compiladores tratan el tipo char como signed y otros como unsignes.
La mayor parte del tiempo carece de importancia. Si fuese necesario se puede especificar usando

```c
    signed  char sch;
    unsigned char uch
```

Para portabilidad no se debe asumir un signo por defecto, es mejor especificarlo.

Dada la cercania entre caracteres y integers, C89 usa el termino Integrals, para referirse a su conjunto. Los tipos enumerados tb lo son.
En C99 no se usa, son los integers los que engloban a los caracters y los enumendos.

## Aritmetics types

Los tipos integer y floan son conocidos de forma conjunta como tipos aritmeticos.

## Secuencias de escape

Normalmente las constantes caracteres van entre comillas. Pero hay caracteres especiales que son invisibles o que no se pueden teclean. Los escape caracters resuelven este problema.

## Funciones para manejar caracteres

```toupper(char c)``` permite convertir un caracter a mayuscula

es preciso incluir la directiva ```#include <ctype.h>```

## Leer y escribir caracteres con scanf y printf

%c permite leer y escribir un caracter simple.
Reconoce los espacios en blanco.

## Leer y escribir con getchar y putchar
getchar y putchar son otros metodos que pueden substituir a scanf y printf. Se almacenan en una variable. Getchar devuelve un int.
Son mas rapidos que scanf y printf en ejecucion ya que solo trabajan con un tipo de datos y suelen ser implementados como macros.
Ademas permite construir loops mas condensados donde getchar forme la expresion de control

Hay que ser cuidadoso si se usa scanf y getchar en el mismo programa ya que scanf tiene tendencia a dejar atras caracteres sobre los que pasa pero que no lee, como las nuevas lineas

# Type conversion

Los ordenadores son mas restrictivos que C respecto a la aritmetica. Los operandos deben ser normalmente del mismo tamano y estar almacenados de la misma forma. Puede que un ordenador pueda sumar dos enteros de 16 bits directamente, pero no uno de 16 y otro de 32.
C permite mezclar diferentes tipos en una misma expresion. El compilador puede que genere instrucciones para convertir un operando a otro tipo para que el hardware pueda evaluar la expresion. Para sumar un short y un entero, C convertira el short a entero. 
Sumar un entero y un float es mas complicado. Son conversiones implicitas. 
C permite que el programados haga conversiones explicitas usando el operador "cast". 
Reglas para la conversion implicita de tipos, se realizan en las siguientes situaciones:
* Cuando los operandos en una operacion aritmetica o logica no tienen el mismo tipo.
* Cuando el tipo de expresion del lado derecho de una signacion no encaja con el tipo de la variable del lado izquierdo.
* Cuando el tipo del argument en una funcion no encaja con el tipo correspondiente del parametro.
* Cuando el tipo de  expresion en return no encaja con el tipo de retorno de la funcion

## Conversiones aritmeticas comunes

Las conversiones aritmeticas tipicas son aplicadas a los operandos de la mayoria de operaciones binarias. Entre dos operandos de tipo distinto, la estrategia habitual es convertir al tipo mas estrecho (con menos bytes) que permita acomodar ambos operandos.
Entre las conversiones mas comunes esta la "integral promotion", que convierte un caracter o shor a int.

Emergen dos categorias principales de conversiones aritmeticas:

* El tipo de alguno de los operandos es float. Se convierte al mayor.
float->double->long double

* Ninguno de los operandos es float. Primero se hace integral promotion en los dos operandos, garantizando que ninguno de los dos es short o char, despues:
int->unsigned int-> long int-> unsigned long int. 

Es recomendable no hacer operaciones entre operandos signed y unsigned.

## Conversion durante la asignacion

La expresion en la parte derecha es convertida al tipo de expresion de la parte izquierda. Si el tipo de la parte izquierda es lo suficientemente ancho funcionara sin problema. En otros casos, como asignar un float a un tipo int, habra problemas como perder la parte fraccional o si esta fuera de los rangos.
Si no especificamos que una constante float lo es anadiendo el sufijo f se entendera que es double y puede dar warnings.

## Conversiones implicitas en C99

Las reglas son diferentes a causa de los tipos adicionales.
Cada tipo entero tiene un "integer conversion rank" y pasa de tener integral promotion a  integers promotions.

## Casting

Cast aporta un mayor grado de control a las conversiones, haciendolas explicitas.


# Definicion de tipos

Mediante typedef se pueden configurar tipos a conveniencia dandole nuestros propios nombres. Algunos programadores Capitalizan la primera letra del nombre.
Usar typedef hace que el compilador anada el nuevo nombre a la lista de tipos que reconoce.

Ventajes:
* Permiten hacer mas entendible un programa al elegir nombres signicativos.

* Permiten modificar mas facilmente programas

## Type definitions y portabilidad

Uno de los problemas de mover un programa de una maquina a otra es que los tipos pueden tener diferentes rangos. Typedef hace que cambiar los tipos sea rapido. No resuelve todos los problemas ya que si se usa printf o scanf habra que cambiar el % correspondiente

# El operador sizeof

sizeof permite que un programa determine cuanta memoria se requiere para almacenar un particular tipo. El valor de ```sizeof {type-name} es un entero unsigner que representa el numero de bytes requeridos para almacenar un valor de type-name..