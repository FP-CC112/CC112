# __Ejercicio 1__
Una clínica necesita un sistema para gestionar los turnos de los pacientes en orden de llegada. Cada paciente debe registrarse con su nombre, edad y motivo de consulta. El sistema debe permitir añadir nuevos turnos, eliminar turnos atendidos y mostrar la lista actual de turnos.

1. Implementa un programa en C++ que use una lista enlazada simple para representar los turnos. 

2. Cada nodo debe almacenar:
    * Nombre del paciente (cadena dinámica)
    * Edad
    * Motivo de la consulta (cadena dinámica)
    * Puntero al siguiente nodo

3. Su programa debe permitir:
    * Añadir un nuevo paciente al final de la lista (nuevo turno).
    * Eliminar el primer paciente de la lista (paciente atendido).
    * Mostrar la lista completa de turnos pendientes.
    * Buscar un paciente por nombre.

4. Utilice funciones para:
    * Crear un nuevo nodo.
    * Insertar al final.
    * Eliminar el primero.
    * Buscar un paciente.
    * Mostrar la lista.


Aplica asignación y liberación dinámica de memoria correctamente (sin fugas). Puede apoyarse 
con software como [valgrind](https://web.stanford.edu/class/archive/cs/cs107/cs107.1256/resources/valgrind.html
) o [fsanitize](https://developers.redhat.com/blog/2021/05/05/memory-error-checking-in-c-and-c-comparing-sanitizers-and-valgrind) en linux,  

* Adicionalmente, implemente una opción que permita cancelar un turno ingresando el nombre del paciente.



<!-- [Texto del enlace](https://ejemplo.com)-->
<!--[Texto alternativo](https://ejemplo.com/imagen.png)>


