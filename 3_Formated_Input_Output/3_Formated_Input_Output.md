# printf

Funcion disenada para mostrar una cadena, llamada "format string". Esta cadena formateada puede contener constantes, variables y expresiones. Puede contener valores ordinarios y "conversion specifications", que comienzan por %. La informacion despues de % especifica como debe formatearse desde binario hasta los caracteres.

Los compiladores de c no tienen porque chequear que coincidan el numero de % con el numero de items de salida. Tampoco chequean que el formato de salida sea apropiado para el tipo de item de salida.

%m.pX o %-m.pX

m, minimun field width: valores, rellena con espacios o recorta. Si tiene guion rellena por detras
p, precission: decimales, depende de X
X, conversion specification:
    * d: enteros
    * f, e, g: flotantes, resuelven ciertos problemas asociados con no conocer que tamano tendran algunos valores.

## secuencias de escape

Las secuencias de escape, como \n, permiten que la cadena contenga caracteres que de otra forma causarian problemas al compilador, incluyendo caracteres de control y aquellos con un significado para el compilador como las comillas. Algunos ejemplos son \n, \b, \n, \t, \" o \\.

# scanf

Esta funcion lee entrada de acuerdo a un formato. Al igual que printf puede contener caracteres ordinarios y "conversion specifications", siendo esencialmente las mismas que printf.

Al igual que con printf el compilador no revisa el numero de items, ni el tipo. El programador debe acordarse de usar el simbolo direccion antes de cada variable.

Es una herramienta poderosa pero que no perdona. Muchos programadores prefieren leer caracteres y convertirlos a su forma numerica mas tarde. Si se introduce una entrade inesperada el programa no se comportara correctamente. 

scanf es una funcion que reconoce patrones, intenta encajar grupos de entrada con las "conversion specifications". Para cada "conversion specification" scanf trata de localizar un item en los datos de entrada, saltando espacion en blanco si es necesario. Lee el item y se detiene cuando algo no encaja con el formato. Si es leido de forma exitosa sigue con el resto de la entrada. Si la lectura fracasa, scanf regresa inmediatamente sin leer el resto de la cadena. No diferencia entre espacios y saltos de linea.

# caracteres ordinarios en Format Strings

