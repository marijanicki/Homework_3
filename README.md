# Homework_3

## Ejercicio 1

### Descripción
Se tiene un diagrama UML que muestra como se realizan los procesos de guardar los datos de las mediciones de un vuelo. Se guardan datos de la posición, la presión y el tiempo qen el que suceden los datos. Estos mismos deben ser guardados en un archivo de tipo binario por lo que hay que serializarlos para guardarlos y deserializarlos para recuperarlos. 
En la actividad se busco serializar los datos de cada factor. Es decir, serializamos por un lado la presión y por otro lado la posición tiene su propia serialización. La dificultad que muestra la consigna es que el tiempo de la medición es del tipo `unique_ptr` y se encuentro en la clase abstracta `MedicionBase`. Por lo que a la hora de querer agregar las clases `Presion` y `Posicion`, que utilizan este puntero, en `SaveFLightData` no es hacer la copia directamente. Ya que, al ser `unique_ptr` se necesita pasar el ownership. Normalmente esto se haria con el metodo `move()`, pero por consigna no podemos hacerlo de esta manera. Por lo que, la solución que realice para solucionar esto es mediante un deep copy constructor. Sobrecargué el constructor de las clases `Posicion` y `Presion` para que cuando se cree la clase `SaveFLightData` y necesite asignar estas clases, directamente llamo a los deep copy constructor correspondientes a cada clase. 

### Compilación
g++ -std=c++23 main.cpp Presion_pos.cpp SaveFlightData.cpp MedicionBase.cpp -Wall -g -o Ej1

./Ej1

## Ejercicio 2
### Descripción e implementación 
El ejercicio pide que se realicen las clases de cuatro figuras `punto`, `circulo`,`elipse` y `rectangulo` y de ellas se calcule su area. Lo que implemente es que como todas ellas tienen el atributo posicion (hecho con pair para tener juntos los datos de x e y) para evitar hacer un get y set para cada uno realice una clase abstracta que todas utilizan. Luego a cada clase debi agregarle los setters y getters de los demas atributos (radio, semiejes, ancho, largo), según cada caso. 
A su  vez, realice template specialization para el calculo del area así según cual era el tipo del objeto se llamaba a la clase correspondiente y se hacia el calculo de ese tipo. 

### Compilación
g++ -std=c++23 main.cpp figuras.cpp -Wall -g -o ej2

./ej2

## Ejercicio 3
### Descripción e implementación 
Se debe realizar un json específico mediante dos clases 1 y 2.
`Clase1`: Esta es la encargada de guardar toda la información y dejarla de la manera correcta para armar el json.
    Utiliza un template specialization para el tipo de dato que se va a procesar así se puede realizar distintos procesamientos para distintos datos sin realizar una sobrecarga de función. 
    Para realizar el procesamiento lo que hacemos es mediante un if constexpr revisamos en compilación que tipo de dato es así en ejecución se procesa (transformar los datos a string). 
`Clase2`:
 *`asociar_data()`: Junta los datos procesados en la Clase1 y  con la etiqueta correspondiente y lo guarda en la clase.
 *`make_json()`: genera el archivo json y le escribe los datos guardados.
 *`json_show()`: Se muestra por pantalla la información cargada en el json, que son los guardados en la clase.

### Compilación
g++ -std=c++23 main.cpp Clase2.cpp -Wall -g -o ej3

./ej3