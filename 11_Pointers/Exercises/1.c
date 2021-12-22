int *p = &i;

i es una variable que tiene un valor y una direccion
p es un puntero con un valor que es la direccion de i y con su propia direccion
*p es lo que hay en la direccion a la que apunta, el cual es el valor de i ALIAS 
&p es la direccion de p
*&p es lo que hay dentro de la direccion de p, que es la direccion de i 
&*p 
*i es lo que hay en la direccion apuntada de i, si i es un puntero
&i es la direccion de i, el valor que guarda p
*&i es un alias 
&*i no es un alias