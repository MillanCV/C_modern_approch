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

