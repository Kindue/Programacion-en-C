#include <stdlib.h>

//Dise˜nar funciones o procedimientos para implementar las siguientes operaciones sobre
//arreglos de n´umeros enteros:
//a) Un procedimiento que inicialice al azar los primeros n elementos de un arreglo reci-
//bido como argumento.
//b) Un procedimiento que ordene en forma ascendente los primeros n elementos de un
//arreglo recibido como argumento.
//c) Una funci´on que determine si los primeros n elementos de un arreglo recibido como
//argumento se encuentran ordenados de forma ascendente.
//d ) Un procedimiento que reciba dos arreglos de enteros A1 y A2, cada uno con una
//cierta cantidad de elementos previamente ordenados de forma ascendente, y que
//retorne un nuevo arreglo resultante de intercalar de forma ordenada y sin repetici´on
//los elementos de A1 y A2.

void inicializar(int* pArreglo, int longitud){
    for(int i = 0; i < longitud; i++){
        *(pArreglo + i) = rand();
    }
}
