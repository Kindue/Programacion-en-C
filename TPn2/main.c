#include <stdio.h>
#include <stddef.h>
//
//// Función que toma un puntero como argumento y modifica el valor al que apunta
//void modificarValor(int *ptr) {
//    // Modifica el valor al que apunta el puntero
//    printf("%d", *ptr);
//    *ptr = 42;
//    printf("%d", *ptr);
//}
//
//int main() {
//    int miVariable = 10;
//
//    printf("Antes de modificarValor: miVariable = %d\n", miVariable);
//
//    // Llama a la función y pasa un puntero a miVariable
//    modificarValor(&miVariable);
//
//    printf("Después de modificarValor: miVariable = %d\n", miVariable);
//
//    return 0;
//}

//void f(double formal){
//    //checkpoint1
//
//    printf("%f", formal);
//    formal = formal + 56.75;
//    //checkpoint2
//}
//
//void main(){
//    double myVar = 123.4;
//    double* p;
//    p = &myVar;
//    printf("%f", *p);
//    f(*p);
//    printf("%f", *p);
//    printf("%f", myVar);
//    //checkpoint3
//}

//void f(double* formal){
//    //checkpoint1
//    *formal = *formal + 56.75;
//    //checkpoint2
//}
//void main(){
//    double myVar = 123.4;
//    double* p;
//    p = &myVar;
//    f(p);
//    //checkpoint3
//}

//void f(double** formal){
//    //checkpoint1
//    **formal = **formal + 56.75;
//    *formal = NULL;
//    //checkpoint2
//    formal = NULL;
//    //checkpoint3
//}
//void main(){
//    double myVar = 123.4;
//    double* p;
//    p = &myVar;
//    f(&p);
//    //checkpoint4
//}

int main()
{

//  EJERCICIO 5

//    int arreglo1[30];
//    int arreglo2[20];
//    int tamanio1 = sizeof(arreglo1) / sizeof(arreglo1[0]);
//    int tamanio2 = sizeof(arreglo2) / sizeof(arreglo2[0]);
//    int *pArr1 = arreglo1;
//    int *pArr2 = arreglo2;
//    int *pArr3;
//
//
//    inicializar(pArr1, tamanio1);
//    printf("Arreglo 1 inicializado con las siguientes componentes:\n");
//    for (int i = 0; i < tamanio1; i++) {
//        printf("%d ", arreglo1[i]);
//    }
//    printf("\n");
//
//
//    printf("\n");
//    printf("Arreglo 1 con las primeras %d componentes ordenadas:\n", tamanio1);
//    ordenarAscendente(pArr1, tamanio1);
//    for (int i = 0; i < tamanio1; i++) {
//        printf("%d ", arreglo1[i]);
//    }
//    printf("\n");
//
//
//    printf("\n");
//    if(estanOrdenados(pArr1, tamanio1)){
//        printf("El arreglo 1 hasta la componente %d esta ordenado", tamanio1);
//    }else{
//        printf("El arreglo 1 hasta la componente %d NO esta ordenado", tamanio1);}
//    printf("\n");
//
//
//    printf("\n");
//    printf("Arreglo 2 con las primeras %d componentes ordenadas:\n", tamanio2);
//    inicializar(pArr2, tamanio2);
//    ordenarAscendente(pArr2, tamanio2);
//    for (int i = 0; i < tamanio2; i++) {
//        printf("%d ", arreglo2[i]);
//    }
//    printf("\n");
//
//
//    printf("\n");
//    int tamanio3 = tamanio2 + tamanio1;
//    pArr3 = intercalarArreglos(*pArr1, *pArr2, tamanio1, tamanio2);
//    printf("Nuevo arreglo formado al intercalar el arreglo 1 y el arreglo 2:\n");
//    for (int i = 0; i < tamanio3; i++) {
//        printf("%d ", pArr3[i]);
//    }

// EJERCICIO 6

//    int arreglo[5] = {1,2,3,4,5};
//    int *pArreglo = arreglo;
//    int tamanio = sizeof(arreglo) / sizeof(arreglo[0]);
//    printf("Arreglo sin cambios:\n");
//    for (int i = 0; i < tamanio; i++) {
//        printf("%d ", pArreglo[i]);
//    }
//    printf("\n");
//    reemplazar(arreglo, 3, 0);
//    printf("Arreglo luego de cambiar con el arreglo directamente:\n");
//    for (int i = 0; i < tamanio; i++) {
//        printf("%d ", pArreglo[i]);
//    }
//    printf("\n");
//    reemplazar(pArreglo, 3, 0, tamanio);
//    printf("Arreglo luego de volver a cambiar de 0 a 3 con un puntero hacia el arreglo:\n");
//    for (int i = 0; i < tamanio; i++) {
//        printf("%d ", pArreglo[i]);
//    }

//  EJERCICIO 7


    int longitud = 3;
    int arr_num [longitud];
    int * arr_punt [longitud];
// INICIALIZACION
    int i = 0;
    for(i=0; i<longitud; i++){
        arr_num[i] = i+1;
        arr_punt[i] = &arr_num[i];
        }
    // INSTRUCCION 1
    invertir_arr_num(arr_num, longitud);
    // INSTRUCCION 2
    invertir_arr_punt(arr_punt, longitud);

    return 0;
}
