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
    int arreglo[8] = {20,5,6,7,5,2,8,2};
    int tamanio = sizeof(arreglo) / sizeof(arreglo[0]);
    int longitud = 5;
    int *pArr = arreglo;
    inicializar(pArr, longitud - 1);
    for (int i = 0; i < tamanio; i++) {
        printf("%d ", arreglo[i]);
    }


    return 0;
}

