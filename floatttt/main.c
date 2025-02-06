#include <stdio.h>

#define MAX 5  // tama�o del array

int main() {
    float numeros[MAX];  // array para guardar los n�meros
    int i;

    // solicitar al usuario los valores
    printf("Ingresa %d numeros decimales:\n",MAX);
    for (i =0;i<MAX;i++) {
        printf("Numero %d:",i+1);
        scanf("%f",&numeros[i]);
    }

    // mostrar los valores ingresados
    printf("\nLos numeros ingresados son:\n");
    for (i = 0; i < MAX; i++) {
        printf("%.2f ", numeros[i]);
    }

    return 0;
}
