#include <stdio.h>
#include <stdlib.h>
#include "pila.h";

int main()
{
    /**1)Sumar los elementos de una pila (usar variables enteras) */
    /*int i, acumulador;
    acumulador = 0;
    srand(time(NULL));
    Pila elementos;
    inicpila(&elementos);

    for (i = 1; i <=10; i++) {
        apilar(&elementos, rand()%10+1);
        acumulador = acumulador + tope(&elementos);
    }
    printf("Los elementos de la pila son los siguientes: \n");
    mostrar(&elementos);
    printf("La suma de todos los elementos de la pila es: ");
    printf("%i", acumulador);
    printf("\n"); */


    /**2)Contar los elementos de una pila (usar variables enteras) */

    /*int contador;
    contador = 0;
    char eleccion;
    srand(time(NULL));
    Pila pila;
    inicpila(&pila);

    do { //Ingresarle elementos a una pila.
        leer(&pila);
        printf("Ingrese s para continuar \n");
        fflush(stdin);
        scanf("%c", &eleccion);
        printf("\n");
        contador = contador + 1;
    } while(eleccion == 's');

    printf("Los elementos de la Pila son:");
    mostrar(&pila);
    printf("\n");
    printf("Total de elementos: %i", contador);
    printf("\n"); */

    /**3)Calcular el promedio de los valores de una pila (usar variables) */
    /*
    Pila elementos;
    inicpila(&elementos);

    int contador, acumulador;
    float promedio;
    char eleccion;
    acumulador = 0;
    contador = 0;

    do { //Ingresarle elementos a una pila.
        leer(&elementos);
        printf("Ingrese s para continuar \n");
        fflush(stdin);
        scanf("%c", &eleccion);
        printf("\n");
        contador = contador + 1;
        acumulador = acumulador + tope(&elementos);
    } while(eleccion == 's');

    promedio = acumulador / contador;

    printf("Los elementos de la Pila:");
    mostrar(&elementos);
    printf("\n");
    printf("La sumatoria total de los elementos: %i", acumulador);
    printf("\n");
    printf("Total de elementos: %i", contador);
    printf("\n");
    printf("Promedio: %.2f", promedio);
    printf("\n"); */

    /**4)Encontrar el menor elemento de una pila y guardarlo en otra. (sin variables enteras, solo
    pilas)*/
    /*
    Pila elementos, aux, menor;
    inicpila(&elementos);
    inicpila(&aux);
    inicpila(&menor);

    char eleccion;
    do { //Ingresarle elementos a una pila.
        leer(&elementos);
        printf("Ingrese s para continuar \n");
        fflush(stdin);
        scanf("%c", &eleccion);
        printf("\n");
    } while(eleccion == 's');

    if(!pilavacia(&elementos)) {
        apilar(&menor, desapilar(&elementos));
    }
    while(!pilavacia(&elementos)) {
        if(tope(&elementos) < tope(&menor)) {
            apilar(&aux, desapilar(&menor));
            apilar(&menor, desapilar(&elementos));
        }
        else {
            apilar(&aux, desapilar(&elementos));
        }
    }

    while(!pilavacia(&aux)) {
        apilar(&elementos, desapilar(&aux));
        }

        printf("Elementos de la Pila: ");
        mostrar(&elementos);
        printf("Elemento menor de la Pila:");
        mostrar(&menor);

    */

    /**
    5)Insertar un elemento en una pila ordenada de menor (tope) a mayor
    (base) de forma tal que se conserve el orden. (sin variables enteras, solo pilas)*/

    /*
    Pila dada, aux, menor, dato;
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&menor);
    inicpila(&dato);


    char eleccion;
    do { //Ingresarle elementos a una pila.
        leer(&dada);
        printf("Ingrese s para continuar \n");
        fflush(stdin);
        scanf("%c", &eleccion);
        printf("\n");
    } while(eleccion == 's');

        printf("Mostrando pila cargada: ");
        mostrar(&dada);
        printf("\n");

    //ORDENAMIENTO POR SELECCION ALGORITMO
        if(!pilavacia(&dada)) {
        apilar(&menor, desapilar(&dada));
        }
        while(!pilavacia(&dada)) {
        if(tope(&dada) < tope(&menor)) {
            apilar(&aux, desapilar(&menor));
            apilar(&menor, desapilar(&dada));
        }
        else {
            apilar(&aux, desapilar(&dada));
        }
        }
        printf("Apilando en Dada lo que desapilo de Menor... \n");
        apilar(&dada, desapilar(&menor));

        while(!pilavacia(&aux)) {
        apilar(&dada, desapilar(&aux));
        }

        printf("Mostrando la pila ordenada: ");
        mostrar(&dada);
        //ORDENAMIENTO POR INSERCCION ALGORITMO:
        printf("Ingrese el dato a insertar en la pila: ");
        leer(&dato);

        printf("Mostrando el dato a insertar: ");
        mostrar(&dato);

        while(!pilavacia(&dada) && tope(&dada)>tope(&dato)){
            apilar(&aux, desapilar(&dada));
        }
        apilar(&dada, desapilar(&dato));

        while(!pilavacia(&aux)){
            apilar(&dada, desapilar(&aux));
        }
        printf("Mostrando el dato ya insertado en la pila: ");
        mostrar(&dada);
        printf("\n"); */

    /**6) Usando lo resuelto en el ejercicio 4, pasar los elementos de una pila a otra de forma tal
    que la segunda pila quede ordenada de mayor (tope) a menor (base). Esto se llama metodo de
    ordenamiento por selección*/
    /*
    Pila elementos, aux, menor, ordenamiento;
    inicpila(&elementos);
    inicpila(&aux);
    inicpila(&menor);
    inicpila(&ordenamiento);

    char eleccion;
    do {        //Ingresarle elementos a una pila.
    leer(&elementos);
    printf("Ingrese s para continuar \n");
    fflush(stdin);
    scanf("%c", &eleccion);
    printf("\n");
    } while(eleccion == 's');

    printf("Pila Elementos cargada...\n");
    mostrar(&elementos);

    if(!pilavacia(&elementos)) {
    apilar(&menor, desapilar(&elementos));
    }
    while(!pilavacia(&elementos)) {
    if(tope(&elementos) < tope(&menor)) {
        apilar(&aux, desapilar(&menor));
        apilar(&menor, desapilar(&elementos));
    }
    else {
        apilar(&aux, desapilar(&elementos));
    }
    }

    while(!pilavacia(&aux)) {
    apilar(&elementos, desapilar(&aux));
    }

    apilar(&elementos, desapilar(&menor));

    //ORDENAMIENTO POR SELECCIÓN
    printf("Ordenamiento por seleccion... \n");
     while (!pilavacia(&elementos)) {

        apilar(&menor, desapilar(&elementos));

        while(!pilavacia(&elementos))  {
            if(tope(&menor)>tope(&elementos)) {
                apilar(&aux, desapilar(&menor));
                apilar(&menor, desapilar(&elementos));
            } else
                apilar(&aux, desapilar(&elementos)); }

        while(!pilavacia(&aux)) {
        apilar(&elementos, desapilar(&aux)); }

        apilar(&ordenamiento, desapilar(&menor));  }


        printf("Pila ordenada x seleccion\n");
        mostrar(&ordenamiento); */

    /**7)Determinar si un elemento buscado está dentro de una pila. Al encontrarlo finalziar busqueda */
    /*
    int num;
    srand(time(NULL));
    Pila encontrado, dada, aux;
    inicpila(&aux);
    inicpila(&encontrado);
    inicpila(&dada);
    int elemento,cantidadElementos, i;

    num = 0;

    printf("Cuantos elementos quiere que tenga la pila? \n");
    scanf("%i", &cantidadElementos);
    printf("\n");
    //Agregar elementos a la pila Dada aleatoriamente
    for (i = 1; i <= cantidadElementos; i++) {
        apilar(&dada, rand()%50 + 1);
    }

    printf("Ingrese un numero a encontrar en la Pila DADA: ");
    scanf("%i", &elemento);
    printf("\n");

    //FILTRADO

    while (!pilavacia(&dada)&&tope(&dada)!=elemento) {
        apilar(&aux, desapilar(&dada)); }

    if(!pilavacia(&dada)) {

        apilar(&encontrado, tope(&dada)); }


    while (!pilavacia(&aux)) {

        apilar(&dada, desapilar(&aux)); }
    printf("Elementos de la Pila Cargada: \n");
    mostrar(&dada);

    if(!pilavacia(&encontrado)) {
            printf("El elemento encontrado es: \n");
        mostrar(&encontrado);
    } else {
        printf("El elemento que buscaba no se encuentra en la Pila Dada \n");
    }
    }
    */

    /**8)Eliminar un elemento de una Pila. Al eliminarlo, finalizar el recorrido y dejar el resto en el mismo orden*/
    /* Pila basura, elementos, auxE;
    inicpila(&basura);
    inicpila(&elementos);
    inicpila(&auxE);

    int i, cantidadE, eliminar;
    srand(time(NULL));

    printf("Cuantos elementos quiere que tenga la Pila? \n");
    scanf("%i", &cantidadE);
    printf("\n");

    for(i = 1; i <= cantidadE; i++) {
        apilar(&elementos, rand()%50 + 1);
    }

    printf("Pila Cargada \n");
    mostrar(&elementos);
    printf("\n");

    printf("Indique el elemento a eliminar de la Pila: ");
    scanf("%i", &eliminar);

    //Inicio de la búsqueda

    while(!pilavacia(&elementos) && tope(&elementos) != eliminar) {
        apilar(&auxE, desapilar(&elementos));
    }

    if(!pilavacia(&elementos)) {
        apilar(&basura, desapilar(&elementos));
    }
    printf("El elemento eliminado es: ");
    mostrar(&basura);

    while(!pilavacia(&auxE)) {
        apilar(&elementos, desapilar(&auxE));
    } */
    /**9)Verificar si una Pila DADA es capicúa*/
    /*
    srand(time(NULL));

    Pila dada, auxD, dadaCopia, auxC;
    inicpila(&dada);
    inicpila(&auxC);
    inicpila(&dadaCopia);

    int i, flag;
    flag = 1;

    for(i = 1; i <= 3; i++) {
        apilar(&dada, rand()% 3 + 1);
    }
    for(i = 1; i <= 3; i++) {
        apilar(&dadaCopia, desapilar(&dada));
    }

    while(!pilavacia(&dada) && !pilavacia(&dadaCopia)) {

                if (tope(&dada) == tope(&dadaCopia)) {
                apilar(&auxD, desapilar(&dada));
                apilar(&auxC, desapilar(&dadaCopia));
                } else {
                    flag = 0;
                    } }
    if( flag == 1) {
        printf("La pila es Capicua");
    } else {
        printf("La pila no es Capicua");
        printf("/n");
    } */

    /**10)Dadas dos pilas A y B que simulan conjuntos (cada conjunto no tiene elementos repetidos sobre si mismo)
    Realizar un programa que calcule en la Pila C la operación de la union
    A: Base 1 2 3 Tope
    B: Base 2 3 5 7 Tope
    Pila AUB = Base 3 2 1 7 5 Tope */
    /*
    Pila conjuntoA, conjuntoB, unionC, aux, basura, auxB;
    inicpila(&conjuntoA);
    inicpila(&conjuntoB);
    inicpila(&unionC);
    inicpila(&aux);
    inicpila(&auxB);
    inicpila(&basura);

    apilar(&conjuntoA, 1);
    apilar(&conjuntoA, 2);
    apilar(&conjuntoA, 3);
    apilar(&conjuntoB, 2);
    apilar(&conjuntoB, 3);
    apilar(&conjuntoB, 5);
    apilar(&conjuntoB, 7);

    printf("Conjunto A: \n ");
    mostrar(&conjuntoA);
    printf("Conjunto B: \n ");
    mostrar(&conjuntoB);

    //Inicio de la comparación entre los elementos de las Pilas A y B

    while(!pilavacia(&conjuntoB)) {
            while(!pilavacia(&conjuntoA)) {
                if(tope(&conjuntoA) == tope(&conjuntoB)) {
            apilar(&basura, desapilar(&conjuntoA));
        }
        else {
            apilar(&aux, desapilar(&conjuntoA));

        }
            }

            while(!pilavacia(&aux)) {
                apilar(&conjuntoA, desapilar(&aux));
            }
            apilar(&auxB, desapilar(&conjuntoB));
    }

    while(!pilavacia(&conjuntoA)) {
       apilar(&unionC, desapilar(&conjuntoA));
    }
    while(!pilavacia(&auxB)) {
        apilar(&unionC, desapilar(&auxB));
    }

    mostrar(&unionC);
    */
    /**11)Intercalar dos pilas ordenadas en forma creciente (Ordenada1 y Ordenada2) dejando el resultado en una pila también
    ordenada de forma creciente (Ordenada final) */
    /*
    Pila o1, o2, aux1, aux2, seleccion1, seleccion2, menor, ordenadaFinal, aux, finalSeleccion;
    inicpila(&o1);
    inicpila(&o2);
    inicpila(&aux);
    inicpila(&seleccion1);
    inicpila(&seleccion2);
    inicpila(&menor);
    inicpila(&ordenadaFinal);
    inicpila(&finalSeleccion);
    inicpila(&aux1);
    inicpila(&aux2);

    srand(time(NULL));
    int i;

    //Cargar datos aleatorios a las pilas o1 y o2
    for(i = 1; i <= 5; i++) {
        apilar(&o1, rand()%10 + 1);
    }

    for(i = 1; i <=5; i++) {
        apilar(&o2, rand()%10 + 1);
    }

    printf("Elementos cargados en O1 \n");
    mostrar(&o1);
    printf("\n");
    printf("Elementos cargados en O2 \n");
    mostrar(&o2);

    //ORDENAR DE FORMA CRECIENTE ORDENADA1

        while(!pilavacia(&o1)) { //Si Pila o1, tiene datos, entonces...

            apilar(&menor, desapilar(&o1)); //Pasamos el tope de Pila o1 a menor para empezar a comparar y ordenar

            while(!pilavacia(&o1)) { //Volvemos a consultar si Pila o1 posee datos, entonces...

            if(tope(&menor) > tope(&o1)) { //Comparamos si Pila menor es mayor al Tope de Pila o1, si lo es...

                    apilar(&aux1, desapilar(&menor)); //Apilamos en Aux el valor que estaba en menor, ya que dejó de serlo
                    apilar(&menor, desapilar(&o1)); } //Apilamos en menor el nuevo valor

            else { //Caso contrario, si menor no es mayor al tope
                    apilar(&aux1, desapilar(&o1)); } //Voy a pasar ese elemento a otra pila para evaluar el siguiente
            }

            while(!pilavacia(&aux1)) { //Si hay datos en Aux O1, los apila nuevamente a O1

                    apilar(&o1, desapilar(&aux1)); }

                apilar(&seleccion1, desapilar(&menor));//Acá pasamos el menor valor a la ordenada por seleccion
        }
    //ORDENAR DE FORMA CRECIENTE ORDENADA2

        while(!pilavacia(&o2)) { //Si Pila o1, tiene datos, entonces...

            apilar(&menor, desapilar(&o2)); //Pasamos el tope de Pila o1 a menor para empezar a comparar y ordenar

            while(!pilavacia(&o2)) { //Volvemos a consultar si Pila o1 posee datos, entonces...

            if(tope(&menor) > tope(&o2)) { //Comparamos si Pila menor es mayor al Tope de Pila o1, si lo es...

                    apilar(&aux2, desapilar(&menor)); //Apilamos en Aux el valor que estaba en menor, ya que dejó de serlo
                    apilar(&menor, desapilar(&o2)); } //Apilamos en menor el nuevo valor

            else { //Caso contrario, si menor no es mayor al tope
                    apilar(&aux2, desapilar(&o2)); } //Voy a pasar ese elemento a otra pila para evaluar el siguiente
            }

            while(!pilavacia(&aux2)) { //Si hay datos en Aux O1, los apila nuevamente a O1

                    apilar(&o2, desapilar(&aux2)); }

                apilar(&seleccion2, desapilar(&menor));//Acá pasamos el menor valor a la ordenada por seleccion
        }
        printf("Pila O1 en orden creciente... \n");
        mostrar(&seleccion1);
        printf("Pila O2 en orden creciente... \n");
        mostrar(&seleccion2);


    //ORDENAR DE FORMA CRECIENTE AMBAS PILAS
    while(!pilavacia(&seleccion1) && !pilavacia(&seleccion2)) {
        apilar(&ordenadaFinal, desapilar(&seleccion1));
        apilar(&ordenadaFinal, desapilar(&seleccion2));
    }
    //ORDENAMIENTO POR SELECCION DE LA PILA ORDENADAFINAL

    while(!pilavacia(&ordenadaFinal)) {

        apilar(&menor, desapilar(&ordenadaFinal));

        while(!pilavacia(&ordenadaFinal)) {
            if(tope(&menor) > tope(&ordenadaFinal)) {
                apilar(&aux, desapilar(&menor));
                apilar(&menor, desapilar(&ordenadaFinal));
            }
            else {
                apilar(&aux, desapilar(&ordenadaFinal));
            }
        }

        while(!pilavacia(&aux)) {
            apilar(&ordenadaFinal, desapilar(&aux));
        }
        apilar(&finalSeleccion, desapilar(&menor));
    }
        printf("Pila O1 y O2, en Pila Final, ordenada de forma creciente: \n");
        mostrar(&finalSeleccion);
    */
    /**12)Dada la pila ORIGEN ordenarla en forma ascendente por método de inserción dejando el resultado
    en la pila ORIGEN. Para este ejercicio usar lo aprendido para el ejercicio 5. */
    /*
    srand(time(NULL));
    int i, cantidadElementos;

    Pila origen, auxO, dato, ordenadaXseleccion, auxSeleccion, menor;
    inicpila(&origen);
    inicpila(&auxO);
    inicpila(&dato);
    inicpila(&menor);
    inicpila(&auxSeleccion);
    inicpila(&ordenadaXseleccion);

    printf("Cuantos elementos desea agregar de forma aleatoria a la Pila Origen? \n");
    scanf("%i", &cantidadElementos);

    for(i = 1 ; i <= cantidadElementos ; i++) {
        apilar(&origen, rand()%100 + 1);
    }

    printf("Pila Origen cargada: \n");
    mostrar(&origen);
    printf("\n");

    //Ordenamiento por selección de la Pila Origen

    while(!pilavacia(&origen)) {

            apilar(&menor, desapilar(&origen)); //Quitamos el tope de origen y lo apilamos en menor

        while(!pilavacia(&origen)) { //Inicio del Ordenamiento
            if(tope(&menor) > tope(&origen)) {
                apilar(&auxSeleccion, desapilar(&menor));
                apilar(&menor, desapilar(&origen));
            }
            else {
                apilar(&auxSeleccion, desapilar(&origen));
            }
        }
            while(!pilavacia(&auxSeleccion)) {
                apilar(&origen, desapilar(&auxSeleccion));
            }
            apilar(&ordenadaXseleccion, desapilar(&menor));
    }

        printf("Pila Origen Ordenada de forma Ascendente: \n");
        mostrar(&ordenadaXseleccion);

    //Le pedimos al usuario que inserte un número, para luego mostrarlo de forma ordenada

    printf("Ingrese el dato que desea insertar dentro de la Pila Origen \n");
    printf("\n");
    leer(&dato);
    printf("\n");

    //Inicio del Ordenamiento por Inserción

    while(!pilavacia(&ordenadaXseleccion) && tope(&ordenadaXseleccion) > tope(&dato)) { //Comparamos por el dato ingresado por el user
        apilar(&auxO, desapilar(&ordenadaXseleccion)); //Si origen es > al dato, entonces la apila en aux y despila de origen
        }
        apilar(&ordenadaXseleccion, desapilar(&dato)); //Desapilamos ese dato y lo metemos en origen

        while(!pilavacia(&auxO)) {
            apilar(&ordenadaXseleccion, desapilar(&auxO)); //Todo lo que este en aux, se va para origen de nuevo

    }
    printf("Pila Origen ordenada por Insercion de un dato: \n");
    mostrar(&ordenadaXseleccion);
    */

    /**
Suponer un juego de cartas en el que en cada mano se reparten dos cartas por jugador.
Un jugador gana la mano cuando la suma de sus cartas es mayor que las del contrario
y al hacerlo coloca todas las cartas (las de él y las de su rival) en su pila de puntos.

En caso de empate (y para simplificar) siempre gana el jugador1. Simular la ejecución
del juego de tal
manera que dada una pila MAZO (con un número de elementos múltiplo de cuatro)
distribuya las cartas
en las pilas PUNTOSJUG1 y PUNTOSJUG2 como si estos hubieran jugado.
Utilizar las pilas auxiliares que crea conveniente */

srand(time(NULL));

Pila mazo, j1, j2, auxJ1, auxJ2, puntosJ1, puntosJ2;

inicpila(&mazo);
inicpila(&j1);
inicpila(&j2);
inicpila(&auxJ1);
inicpila(&auxJ2);
inicpila(&puntosJ1);
inicpila(&puntosJ2);

char eleccion;
int acumuladorJ1, acumuladorJ2, i;
acumuladorJ1 = 0;
acumuladorJ2 = 0;

/**Inicio del juego:                                                                           */

    //Creación del mazo (40 cartas del 1 al 10) Aleatorias
    do {
        for(i = 1; i <=40; i++) {
        apilar(&mazo, rand()%10+1);
        }
        printf("Mezclando mazo de cartas... \n");
        printf("\n");

    //Del mazo, se reparten 2 cartas a cada jugador y se suman sus valores
        for(i = 1; i <=2; i++) {
            apilar(&j1, desapilar(&mazo));
            acumuladorJ1 = acumuladorJ1 + tope(&mazo);
            apilar(&j2, desapilar(&mazo));
            acumuladorJ2 = acumuladorJ2 + tope(&mazo);
            }
            printf("Repartiendo 2 cartas al Jugador 1... \n");
            printf("Repartiendo 2 cartas al  Jugador 2... \n");
            printf("\n");

            //Inicio de la comparación de las cartas

            while(!pilavacia(&j1) && !pilavacia(&j2)) {

                if(acumuladorJ1 > acumuladorJ2) {
                    printf("Ganador Jugador 1 con: %i puntos", acumuladorJ1);
                    printf("\n");
                    for(i = 1; i <= 2; i++) {
                        apilar(&puntosJ1, desapilar(&j1));
                        apilar(&puntosJ1, desapilar(&j2));
                    }
                }
                else if(acumuladorJ1 == acumuladorJ2) {
                    printf("Empate J1 con %i puntos Y J2 con %i puntos", acumuladorJ1, acumuladorJ2);
                    printf("\n");
                    for(i = 1; i <= 2; i++) {
                        apilar(&puntosJ1, desapilar(&j1));
                        apilar(&puntosJ1, desapilar(&j1));
                    }
                }
                else {
                    printf("Ganador Jugador 2 con: %i puntos", acumuladorJ2);
                    printf("\n");
                    for(i = 1; i <= 2; i++) {
                        apilar(&puntosJ2, desapilar(&j1));
                        apilar(&puntosJ2, desapilar(&j2));
                    }
                }

            } //Fin de la comparación de las cartas
            printf("\n");
            printf("Mostrando los puntos del Jugador1: %i \n", acumuladorJ1);
            printf("\n");
            printf("Mostrando los puntos del Jugador2: %i \n", acumuladorJ2);
            printf("\n");


        //Repartir cartas hasta que el mazo quede vacío o desee terminar el juego
        printf("Pulse 's' para repartir nuevamente \n");
        printf("Pulse letra distinta de 's' para acabar el juego \n");
        fflush(stdin);
        printf("\n");
        scanf("%c", &eleccion);
        printf("\n");

        } while(eleccion == 's' || !pilavacia(&mazo));
    }








