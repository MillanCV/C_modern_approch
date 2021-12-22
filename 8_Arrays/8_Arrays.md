Los arrays son variables de tipo agregadas, que pueden almacenar colecciones de valores.
Hay dos tipos de variables agregadas, los arrays y los structs.

## One-Dimensional Arrays

Un array es una estructura de datos que contiene un numero de datos, todos los cuales tienen el mismo tipo. Estos valores se conocen como elementos. Pueden ser seleccionados individualmente a partir de su posicion.
El array mas simple es el de una dimension. Los elementos estan ordenados uno despues de otro en una sola fila (o columna, a efectos de visualizacion).
Para declarar un array debemos especificar el tipo de los elementos y su numero.

```int a[10];```

Usar una macro para definir el numero de elementos es una practica excelente

```#define N 10```

```int a[N];```

### Array subscripting o indexing

El acceso a los elementos se hace por suscripcion o indexado. La numeracion empieza desde 0 hasta N-1.
La forma a[1] es un lvalue. Cada elemento es tratado como una variable de tipo T.
C no requiere que los limites de indexado sean comprobados. Si se sale del rango tenemos comportamiento indefinido.
Se debe tener cuidado con efectos laterales en el indexado.

## Array initialization

Al igual que cualquier otra variable se le puede dar un valor cuando se declara. Las reglas son un poco confusas.

```int a[5] = {1, 2, 3, 4, 5};```

Si se ponen menos valores que los declarados se rellenan con 0;

El inicializador no puede estar vacio. El minimo seria:

```int a[5] = {0}```

Si existe inicializador se puede omitir el numero de elementos. El compilador usa la longitud del inicializador para determinar la extension del array.

### C99 -  designated initializers.

Permite inicializar ciertos valores.
``` int a[15] = {[2]= 99, [9] = 7};```
Cada numero es un designador. No importa el orden. Deben ser expresiones integer constantes. Si se omite la longitud del array se deducira del designador mas grande + 1.

### Usando el operador sizeof con Arrays

Este operador permite determinar el tamano de un array en bytes. Si a es un array de 10 integers su size of sera normalmente 40 bytes.
Se puede calcular la extension de un array haciendo el sizeof del array entre el sizeof de un elemento cualesquiera.

```sizeof(a) / sizeof(a[0])```

Podemos incluirlo como control en un loop aunque algunos compiladores se quejaran para ```i < sizeof(a) / sizeof(a[0])```

Para que no se queje podemos castear la expresion que calcula la extension. Como la expresion que queda es un poco dificil de entender se puede definir una macro que la represente

```#define SIZE ((int) (sizeof (a) / sizeof(a[0])))```

# Multidimensional arrays

Un array puede tener cualquier numero de dimensiones

Por ejemplo, ```int m[5][9]```, declara un array de 5 filas y 9 columnas, ambas indexadas desde el 0.

Los array se almacenan en memoria en filas. 

Para recorrer arrays multidimensionales son muy socorridos los bucles anidados.

En C los arrays multidimensionales tienen un rol menor respecto a otros lenguajes ya que es mas flexible usar arrays de punteros para almacenar multidimensional data.

## Inicializando un un array multidimensional

```c
    inf m[3][3] = {{1, 1, 0},
                    {1 , 0, 1}
                    {0, 1, 1}};
```

* Si no se expecifican todos los valores sera rellenado con ceros.

* Se pueden omitir los corchetes interiores, el compilador se ocupa de todo

## Constant arrays

Un array, ya sea de una dimension o multidimensional, puede hacerse "constante" declarandolo con ```const```.

```const char hex_chars[] = {'0', '1', '2', '3', '4', '5'};```

Un array que haya sido declarado constante no debe ser modificado por el programa, debe permanecer igual toda la vida del programa. El compilador dara error.

Declarar un array como const documenta el programa y permite que alguien que lo lea lo reconozca. Const es particularmente con arrays.



# C99 - Arrays de longitud variable

En C99 es posible usar arrays de longitud variable. Su longitud se calcula cuando el programa se ejecuta, no cuando se compila. El programador no esta obligado a escoger una longitud arbitraria con lo que se puede ahorrar memoria.
Los VLA no pueden tener static storage duration. Otra restricion que no debe tener inicializador.
