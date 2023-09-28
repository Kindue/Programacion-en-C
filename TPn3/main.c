#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct usuario{
    char apellido [41];
    char nombre [41];
} * tUsuario;

struct usuario nuevo_usuario_1(){
    char n [41], a [41];
    struct usuario u;
    printf("Ingrese nombre: "); scanf("%40[^\n]", n); fflush(stdin);
    printf("Ingrese apellido: "); scanf("%40[^\n]", a); fflush(stdin);
    strcpy(u.nombre, n);
    strcpy(u.apellido, a);
    return u;
}

tUsuario nuevo_usuario_2(){
    char n [41], a [41];
    tUsuario u;
    printf("Ingrese nombre: "); scanf("%40[^\n]", n); fflush(stdin);
    printf("Ingrese apellido: "); scanf("%40[^\n]", a); fflush(stdin);
    strcpy(u->nombre, n);
    strcpy(u->apellido, a);
    return u;
}

tUsuario nuevo_usuario_3(){
    char n [41], a [41];
    tUsuario u = (tUsuario) malloc(sizeof(struct usuario));
    printf("Ingrese nombre: "); scanf("%40[^\n]", n); fflush(stdin);
    printf("Ingrese apellido: "); scanf("%40[^\n]", a); fflush(stdin);
    strcpy(u->nombre, n);
    strcpy(u->apellido, a);
return u;
}

tUsuario nuevo_usuario_4(){
    char n [41], a [41];
    struct usuario p;
    printf("Ingrese nombre: "); scanf("%40[^\n]", n); fflush(stdin);
    printf("Ingrese apellido: "); scanf("%40[^\n]", a); fflush(stdin);
    strcpy(p.nombre, n);
    strcpy(p.apellido, a);
    return &p;
}

int main(){
    int i;
    tUsuario u, users [4];
    struct usuario u_1;
    u_1 = nuevo_usuario_1();
    users[0] = &u_1;
    users[1] = nuevo_usuario_2();
    users[2] = nuevo_usuario_3();
    users[3] = nuevo_usuario_4();
    for(i=0; i<4; i++){
        u = users[i];
        printf("Usuario %i: \n", i+1);
        printf("Nombre: %s \n", u->nombre);
        printf("Apellido: %s \n", u->apellido);
    }
return 0;
}
