# Programación Orientado a Objetos II

[![Build Status](https://travis-ci.com/otreblan/pooii-tarea-2-entrega-21-04-otreblan.svg?branch=master)](https://travis-ci.com/otreblan/pooii-tarea-2-entrega-21-04-otreblan)

## Tarea 2

1.- Implementar Josephus Problem usando un contenedor simple y explicar paso por paso cada 
sentencia del código.


2.- Ordenar un array de acuerdo con otro array.

#### Ejemplo:

Dado dos arrays: arr1 y arr2 con los siguientes elementos,

arr1 = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}

arr2 = {2, 1, 8, 3}

*   El orden es definido por el array arr2. Entonces, en el arr2
2 está antes de 1, entonces todos los 2 en arr1 deben estar antes de 
todos los 1s. De forma similar con 8 y 3.

*   5 no esta en el arr2, entonces para otros elementos que no estan en arr2
el orden es el orden normal creciente, de menor a mayor.


Salida: 2, 2, 1, 8, 8, 3, 5, 6, 7, 9

3.- Dado dos arrays; arr1 y arr2 de tamaño N. La tarea es hacer pares
que contengan valores correspondientes: (arr1[0], arr2[0]), (arr1[1], arr2[1]), ...

Entrada: 
*   T números de pruebas
*   Cada prueba contiene tres lineas
*   La primera linea contiene N, el tamaño de cada array
*   La segunda y tercera linea contienen elementos de cada array
separado por espacios.

Salida:
*   Para cada prueba, en una linea tiene que retornar el array de pares
formado por cada array.


archivo:  archivo1.txt

          2
          7
          10 20 30 40 50 60 70
          80 90 100 110 120 130 140
          4
          1 2 3 4
          5 6 7 8
          
4.- Dado un vector de N enteros positivos y un entero X. La tarea
es encontrar la frecuencia de X en el vector.

Entrada:
*   T como número de pruebas
*   Cada prueba contiene 3 lineas
*   La primera linea es el tamaño N del vector.
*   La segunda linea contiene los N enteros positivos separados por espacio.
*   La tercera linea contiene X, el valor cuya frecuencia es requerida.

archivo:  archivo2.txt

          1
          10
          7 7 7 7 7 7 7 7 7 7
          7
          
Salida:   10

5.- Realizar Ejercicio #4 de la unidad 2 - contenedores.


## Entrega
De acuerdo a lo mencionado en sesión 2, la tarea debe ser entregado 
como máximo el día Martes 21 de Abril a las 23:59 PM.

Ayuda
--
*   [Comandos GitHub](recursos/git-cheat-sheet-education.pdf)
