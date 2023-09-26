#include <stdlib.h>
#include <stdio.h>

//Dise˜nar funciones o procedimientos para implementar las siguientes operaciones sobre
//arreglos de numeros enteros:
//a) Un procedimiento que inicialice al azar los primeros n elementos de un arreglo reci-
//bido como argumento.
//b) Un procedimiento que ordene en forma ascendente los primeros n elementos de un
//arreglo recibido como argumento.
//c) Una funcion que determine si los primeros n elementos de un arreglo recibido como
//argumento se encuentran ordenados de forma ascendente.
//d ) Un procedimiento que reciba dos arreglos de enteros A1 y A2, cada uno con una
//cierta cantidad de elementos previamente ordenados de forma ascendente, y que
//retorne un nuevo arreglo resultante de intercalar de forma ordenada y sin repeticion
//los elementos de A1 y A2.

void inicializar(int* pArreglo, int cantidad){
    srand(time(NULL));
    for(int i = 0; i < cantidad; i++){
        int r = rand();
        pArreglo[i] = r % 1000;
    }
}

void cambio(int* ele1, int* ele2){
    int temp = *ele1;
    *ele1 = *ele2;
    *ele2 = temp;
}
void ordenarAscendente(int* pArreglo, int cantidad){
    int i, j;
    int cambiado;
    for(j = 0; j < cantidad - 1; j++){
        cambiado = 0;
        for(i = 0; i < cantidad - j - 1; i++){
            if(pArreglo[i] > pArreglo[i + 1]){
                cambio(&pArreglo[i], &pArreglo[i+1]);
                cambiado = 1;
            }
        }
        if(cambiado == 0){
            break;
        }
    }
}

int estanOrdenados(int* pArreglo, int cantidad){
    int i;
    int ordenados = 1;
    for(i = 0; i < cantidad - 1; i++){
        if(pArreglo[i] > pArreglo[i + 1]){
            ordenados = 0;
        }
        if(ordenados == 0){
            break;
        }
    }
    return ordenados;
}

int* intercalarArreglos(int* pArr1, int* pArr2, int ele1, int ele2){
    int i = 0;
    int j = 0;
    int k = 0;
    int nuevoArr[ele1 + ele2];
    int *aRet = nuevoArr;
    while((i < ele1) && (j < ele2)){
        if(pArr1[i] < pArr2[j]){
            nuevoArr[k] = pArr1[i];
            i++;
        }else{
            if(pArr2[j] < pArr1[i]){
                nuevoArr[k] = pArr2[j];
                j++;
            }else{
                nuevoArr[k] = pArr1[i];
                i++;
                j++;
            }
        }
        k++;
    }
    while(i < ele1){
        nuevoArr[k] = pArr1[i];
        i++;
    }
    while(j < ele1){
        nuevoArr[k] = pArr1[j];
        j++;
    }
    return aRet;
}

//Implemente un procedimiento que, dado un arreglo de enteros arr y dos enteros a y n,
//modifique el arreglo arr de forma tal que cada aparicion del entero a sea reemplazada por
//el entero n. Analice dos variantes, una en funcion de cada uno de los siguientes prototipos:
//void reemplazar(int arr [], int a, int n);
//void reemplazar(int * arr, int a, int n, int size);
//Compruebe el correcto funcionamiento de las dos variantes considerando reemplazar el
//entero 3 por el entero 0 en un arreglo inicializado con los valores 1,2,3,4,5.


void reemplazar(int arr[], int a, int n){
    int tamanio = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr);
    int k = sizeof(arr[0]);
    int p;
    for(int i = 0; i < tamanio; i++){
        p = arr[i];
        if(arr[i] == a){
            arr[i] = n;
        }
    }
}

//void reemplazar(int* arr, int a, int n, int size){
//    for(int i = 0; i < size; i++){
//        if(arr[i] == a){
//            *(arr + i) = n;
//        }
//    }
//}

void invertir_arr_num(int arr [], int size){
        int f = 0, c = size-1;
        int aux;
        while(f < c){
            aux = arr[f];
            arr[f++] = arr[c];
            arr[c--] = aux;
            }
        }
void invertir_arr_punt(int ** arr, int size){
    int ** cola = arr + size - 1;
    int * aux;
    while(arr != cola){
        aux = *arr;
        *arr = *cola;
        *cola = aux;
        if ((++arr)!=cola)
            cola--;
        }
    }
