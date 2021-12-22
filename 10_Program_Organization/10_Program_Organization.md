Vamos a ver diferencias entre varibles locales y variables externas, bloques, reglas de los ambitos, nombres externos y nombres declarados en bloques. Se sugiere una forma de organizar los prototipos de funciones, la deficicion de funciones, la declaracion de variables y otras partes de los programas en C.

# Variables locales

Una variable declarada en el cuerpo de una funcion es local a la funcion.
Tiene como propiedades:

* Duracion automatica de almacenamiento (automatic storage duration). La duracion de almacenamiento es la porcion de tiempo de ejecucion del programa en la cual la variable existe. 
El almacenamiento es asignado cuando la funcion es llamada y desasignado cuando la funcion vuelve. Por tanto es un proceso automaticao. El valor de la variable se pierde.
* Ambito de bloque (bloque scope): El ambito es la porcion de programa en el que se puede hacer referencia a la variable. Una variable local tiene block scope. Es visible desde el punto de la declaracion hasta el final del cuerpo de la funcion. Otras funciones pueden usar el mismo nombre.

## Variables locales static

Poner static en la declaracion de una variable local causa que la duracion de almacenamiento sea estatica. Esto quiere decir que la variable tiene una localizacion permanente, conservando el valor a lo largo de la ejecucion del programa.
Su ambiento sigue estando restringido a la funcion en la que se declara.

## Parametros

Tienen las mismas propiedades que las variables locales. La unica diferencia entre parametros y variables locales es que cada  parametro es inicializado autmaticamente cuando una funcion es llamada

# External variables o global variables

Pasar argumentos es una forma de pasar informacion a una funcion. Otra forma es comunicarse a traves de variables externas. Sus propiedades son diferentes de las locales: 

* Duracion estatica. Su valor permanece almacenaco indefinidamente
* Ambito de archivo. Es visible desde el punto de la declaracion hasta el final del archivo.

## Pros and Cons of External variables

Son utiles cuando muchas funciones comparten una variable o unas pocas funciones comparten muchas variables. 
En la mayoria de los casos es mejor comunicarse a traves de parametros:

* Si cambiamos la variable externa durante el mantenimiento (por ejemplo, cambiando el tipo), necesitaremos cambiar cada funcion en todo el archivo.
* Si a una variable externa se le asigna un valor incorrecto, puede ser dificil identificar la funcion culpable.
* Las funciones que dependen de variables externas son dificiles de reutilizar en otros programas. La funcion que depende de una variable externa no es autocontenida.

Una practica comun y muy pobre es reutilizar una variable externa en multiples funciones.

# Blocks

Mismas propiedades que las variables locales. Usar bloques dentro de funciones permite reducir la acumulacion de declaraciones al principio de la funcion con funciones que se usan brevemente. Tambien reduce conflictos con los nombres.

# Scope

En C, un mismo identificador puede tener diferentes significados. El alcance permite al programador y al compilador determinar que significado es relevante en un momento dado. Si en un bloque se declara con un nombre ya existente este oculta el anterior.

# Organizar un programa C en un solo archivo

* #include directives
* #define directives
* Type definitions
* Declaration of external variables
* Funcion prototypes
* Function definitions
* Main definition

Cada definicion de funcion puede ser comentada con una caja con el nombre, el proposito, el significado de cada parametro, el valor de retorno y una lista de efectos secundarios.


