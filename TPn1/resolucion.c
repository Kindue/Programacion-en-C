#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>

// Dise˜nar un programa que, dados tres enteros dia, mes, a˜no, analice si la fecha que repre-
// sentan es valida, e indique el resultado por pantalla.

int validarFecha(int dia, int mes, int anio){
    int aRet = 1;
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
        diasPorMes[2] = 29;
    }

    if(mes < 1 || mes > 12){
        aRet = 0;
    }
    if(dia < 1 || dia > diasPorMes[mes]){
        aRet = 0;
    }

    return aRet;
}

// Dise˜nar un programa que, dado un entero largo (long) que representa una cantidad de
// segundos, convierta y muestre dicha cantidad de segundos en el siguiente formato de
// tiempo: hh:mm:ss.


char* tiempoFormateado(long int segs){
    char* aRet = (char*)malloc(9 * sizeof(char));
    int minutos = segs / 60;
    int horas = minutos / 60;
    int segundos = minutos % 60;
    minutos = horas % 60;

    sprintf(aRet,"%d:%d:%d", horas, minutos, segundos);

    return aRet;
}

// Para cada uno de los siguientes items escribir un programa que permita llevar adelante
// la conversion correspondiente:
// a) De grados Celsius a grados Fahrenheit (1 Celsius = 33.8 Farenheit).
// b) De millas por hora a kilometros por minuto (1 milla = 1.609344 kilometros).
// c) De litros cada 100 km a millas por galon ( 1 litro = 0.264172052 galones).

void conversion(float cant, int tipo){
    float res = 0;

    switch(tipo){
        case 1:{
            res = (cant * 9.8) + 32;
            printf("%f grados Celsius equivalen a %f grados Fahrenheit", cant, res);
            break;
        }
        case 2:{
            res = cant / 37.282;
            printf("%f millas por hora equivalen a %f kilometros por minuto", cant, res);
            break;
        }
        case 3:{
            res = 235.215 / (cant);
            printf("%f litros cada 100 km equivalen a %f millas por galon", cant, res);
            break;
        }
    }
}

// Implementar un programa que lea n numeros enteros largos (long) y muestre por pantalla
// el mayor, el menor y el promedio de la serie ingresada.

void mayorMenorPromedio(long int arreglo[], int tamanio){
    long int mayor = 0;
    long int menor = LONG_MAX;
    long int sumaTotal = 0;

    for(int i = 0; i < tamanio; i++){
        if(arreglo[i] > mayor){
            mayor = arreglo[i];
        }
        if(arreglo[i] < menor){
            menor = arreglo[i];
        }
        sumaTotal += arreglo[i];
    }
    if(sumaTotal != 0){
        int promedio = sumaTotal / tamanio;
        printf("El mayor numero de la serie de numeros ingresada es: %ld \n", mayor);
        printf("\n");
        printf("El menor numero de la serie de numeros ingresada es: %ld \n", menor);
        printf("\n");
        printf("El promedio de la serie de numeros ingresada es: %d", promedio);
    }
}

// Dise˜nar un programa que, dado un numero entero en notacion binaria, convierta dicho
// numero a su valor asociado bajo el sistema numerico decimal, y lo muestre por pantalla.

void binarioADecimal(char binario[]){
    int decimal = 0;
    int longitud = strlen(binario);
    int invalido = 1;
    int num;
    for(int j = 0; j < longitud ; j++){
        num = binario[j] - '0';
        printf("%i \n", num);
        switch(num){
            case 1:{
                decimal += pow(2, longitud - 1 - j);
                break;
                }
            case 0:{
                break;}
            default:{
                invalido = 0;}
            }
        if(invalido == 0){
            printf("El numero ingresado no es binario!");
            break;
        }
    }
    if(invalido == 1){
        printf("El numero binario ingresado es equivalente al siguiente numero en decimal: \n");
        printf("%d", decimal);
    }
}

// Implementar un programa que, a partir de una cadena de dıgitos hexadecimales terminada
// en ENTER ingresada por el usuario, retorne su valor equivalente como entero en base diez.
// Se debe contemplar que los dıgitos permitidos van del 0 al 9 y de A a F (mayusculas y
// minusculas incluidas).

int hexadecimalADecimal(char hexadecimal[]){
    int longitud = strlen(hexadecimal);
    int decimal = 0;
    int exponente;
    for(int i = 0; i < longitud; i++){
        exponente = longitud - 1 - i;
        switch(hexadecimal[i]){
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':{
                decimal += (hexadecimal[i] - '0') * pow(16, exponente);
                break;}
            case 'A':
            case 'a':{
                decimal += 10 * pow(16, exponente);
                break;}
            case 'B':
            case 'b':{
                decimal += 11 * pow(16, exponente);
                break;}
            case 'C':
            case 'c':{
                decimal += 12 * pow(16, exponente);
                break;}
            case 'D':
            case 'd':{
                decimal += 13 * pow(16, exponente);
                break;}
            case 'E':
            case 'e':{
                decimal += 14 * pow(16, exponente);
                break;}
            case 'F':
            case 'f':{
                decimal += 15 * pow(16, exponente);
                break;}
            default:{
                decimal = -1;}
        }
    }
    return decimal;
} //PREGUNTAR!

// Dise˜nar un planteo recursivo para la siguientes funciones y mostrar su implementacion
// en C:
// a) Contar la cantidad de dıgitos de un numero entero.
// b) Dado un entero n y un dıgito d, contar la cantidad de veces que d aparece en n.
// c) Contar la cantidad de dıgitos pares que ocupan posiciones impares en un numero
// entero n.

int contadorDig(int numero){
    if(numero < 10){
        return 1;
    }
    else{
        return 1 + contadorDig(numero / 10);
    }
}

int contarDigDeterminado(int numero, int dig){
    if(numero < 10){
        if(numero % 10 == dig){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        if(numero % 10 == dig){
            return 1 + (contarDigDeterminado(numero / 10, dig));
        }
        else{
            return 0 + (contarDigDeterminado(numero / 10, dig));
        }
    }
}

int contarDigParesEnImp(int numero, int posicion){
    if(numero == 0){
       return 0;
    }
    else{
        int digito = numero % 10;
        int suma = (posicion % 2 == 1 && digito % 2 == 0) ? 1 : 0;
        return suma + contarDigParesEnImp(numero / 10, posicion + 1);
        }
    }

// Denominaremos mediano de un numero entero largo positivo al numero que se obtiene de
// sumar todos los dıgitos que ocupan posiciones impares y de restar todos los que ocupan
// posiciones pares. Por ejemplo, el mediano de 318547 es 7−4+5−8+1−3 = −2. Teniendo
// esto en cuenta, dise˜nar e implementar un planteo recursivo que permita determinar el
// mediano de un entero largo ingresado por el usuario.

int calcularMediano(int numero){
    int suma = 0;
    int posicion = 1;
    return calcularMedianoRec(numero, posicion, suma);
}

int calcularMedianoRec(int numero, int posicion, int suma){
    if(numero == 0){
        return suma;
    }
    else{
        int digito = numero % 10;
        int sumaActual = (posicion % 2 == 0) ? (digito * -1) : digito;
        return (sumaActual + calcularMedianoRec(numero / 10, posicion + 1, suma));
    }
}

// Un numero entero se dice prolijo si los dıgitos que lo componen aparecen en orden estric-
// tamente ascendente o descendente. Teniendo esto en cuenta, dise˜nar e implementar un
// plateo recursivo que permita determinar si un entero largo n es o no un numero prolijo.

int calcularProlijoDes(long int numero){
    if(numero == 0){
        return 1;
    }
    else{
        int digito = numero % 10;
        numero /= 10;
        if(digito > numero % 10){
            return calcularProlijoDes(numero);
        }
        else{
            return 0;
        }
    }
}

int calcularProlijoAsc(long int numero){                        // PREGUNTAR!
    if(numero == 0){
        return 1;
    }
    else{
        int digito = numero % 10;
        numero /= 10;
        if(digito < numero % 10){
            return calcularProlijoAsc(numero);
        }
        else{
            return 0;
        }
    }
}

int calcularProlijo(long int numero){
    if(numero == 0){
        return 1;
    }
    else{
        int digito = numero % 10;
        numero /= 10;
        if(digito > numero % 10){                       // Si el ultimo digito es menor al anteultimo me fijo que todos los demas digitos
            return calcularProlijoDes(numero);          // tambien sean descendientes
        }
        else{
            if(digito < numero % 10){                   // Si el ultimo digito es menor al anteultimo me fijo que todos los demas digitos
                return calcularProlijoAsc(numero);      // tambien sean ascendientes
            }
            else{
                return 0;                       // El ultimo digito y el anterior son iguales por lo tanto no son prolijos
                }
        }
    }
}

// Diremos que una palabra es palındroma, si la misma puede leerse de igual forma de izquier-
// da a derecha que de derecha a izquierda. Teniendo esto en cuenta, dise˜nar e implementar
// un planteo recursivo que a partir de una secuencia de caracteres ingresada por el usuario
// que representa la palabra, determine si esta es palındroma.

int palindromaRec(char palabra[], int primera, int ultima){
    if(primera > ultima || primera == ultima){
        return 1;
    }
    else{
        if(palabra[primera] == palabra[ultima]){
            return palindromaRec(palabra, primera + 1, ultima - 1);
        }
        else{
            return 0;
        }
    }
}

int palindroma(char palabra[]){
    int primera = 0;
    int ultima = (strlen(palabra) - 1);
    return palindromaRec(palabra, primera, ultima);
}
