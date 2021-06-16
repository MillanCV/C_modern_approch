# Loops

Un loop es una declaracion cuyo trabajo es ejecutar repetidamente otras declaraciones. En C, cada loop tiene una expresion de control. Cada vez que el cuerpo del loop se ejecuta, la expresion de control se evalua, si la expresion es verdad el loop continua ejecutandose.
Hay tres tipos de declaraciones de loop, while, do y for.
While se usa si la expresion se comprueba antes de ejecutar el cuerpo. Do se usa si la expresion se comprueba despues de ejecutar el loop. For es util si se incrementa o decrementa una variable de contar.
A mayores hay declaraciones como break, continue y goto que permiten hacer loops mas sofisticados

# The while statement

While es la forma mas sencilla de loop.

```c
while (expression)
    statement
```

Si la expresion es cero no se ejecuta el cuerpo. Si no lo es, el cuerpo se ejecuta hasta que el valor de la expresion sea cero.


# The do statement

```c
do statement while (expression);
```

El bucle loop puede verse como un bucle while donde la expresion de control es comprobada despues de la ejecucion del cuerpo.

# The for statement

Es el loop ideal para aquellos que tienen una variable de contar, pero es suficientemente versatil para usarlo como los otros.

```c
for ( exp1; exp2; exp 3) statement
```

suele ser equivalente a 

```c
exp1;
while (exp2){
    statement;
    exp3;
}
```

donde:
* exp1 es una inicializacion
* exp2 controla la finalizacion del loop
* exp3 es una operacion para ser ejecutada al final de cada iteracion

### C99

La primera expresion puede ser sustituida por una declaracion

``` for (int i = 0; i < n; i++) ```

Si ya existiese otra declaracion de i, esta forma crearia una nueva version de i solo visible dentro del loop.

Se pueden declarar mas de una variable dentro de la expresion 1.

``` for (int i = 0, j = 0; i < n; i++) ```

For es muy flexible, y facilmente se puede usar mal o ser abusado.

# Salir de un loop

En ocasiones es necesario salir de un loop en el medio. O salir de un loop en varios sitios.

## Break

Hemos visto que break permite salir de un bloque switch. Tambien se puede usar para saltar de un while, un for o un do. Permite acabar una busqueda cuando hayamos encontrado lo que buscamos.

Hay que tener cuidado con el anidamiento. Break solo permite escapar del loop interno.

## Continue

Continue transfiere el control al punto justo al final del cuerpo del mensaje. El control permanece dentro del loop.

## Goto

Permite saltar a cualquier declaracion en una funcion en la que exista una etiqueta.

Una declaracion puede tener mas de una etiqueta. La etiqueta debe estar en la misma funcion que el goto. 

Se puede usar, por ejemplo, si tenemos una seleccion dentro dentro de un bucle, para salir fuera del bucle desde la seleccion

```c
while(1){
    switch(a){
        case 1:
            goto loop_done;
    }
}

loop_done;
```

## Null

Una declaracion puede ser null, carente de simbolos. Permite escribir loop con cuerpos vacios

```c for (d = 2; d < n && n % d != 0; d++);
    /* empty body loop */
```
En este ejemplo el loop termina

