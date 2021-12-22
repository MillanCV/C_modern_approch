# Funciones

* Las funciones declaradas en un header file y definidas en un c. file, se espera que sean llamadas desde otros .c files. Si estas funciones forman parte de una libreria, los usuarios van a empezar a usarlas, depender de ellas y el creador tendra que mantenerlas.

* Las funciones auxiliares son detalles de implementacion. No se espera que sean llamadas desde otros .c files. Es mejor no incluir su declaracion en un header file, ya que no son parte de la interfaz. Se declaran y/o definen en el archivo c. como estaticas, lo que las oculta en otras unidades de traduccion. Hacerlas estaticas tambien previene los problemas que existen si otros archivos tienen funciones auxiliares con el mismo nombre. Se pueden declarar o directamente definirlas.


# Interfaces

* Es recomendable que san pequenas. Esto hace que sean mas faciles de entender y el codigo mas facil de mantener.


# Variables

* Se deben evitar variables no inicializadas, ya que son causa de bugs.

* Se recomienda definir variables lo mas tarde posible y en el ambito mas estrecho. Esto ayuda a convertir usos no intencionados en errores y reduce la carga mental del lector

# Loops

* Se debe estar atento al patron inicializar un valor, que la condicion dependa del valor y que al final del bucle se modifica el valor. Esto es un for de libro

# Retornos

* Devolver un boolean directamente. No hace falta ver si es falso o verdadero.

