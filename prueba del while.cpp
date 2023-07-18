#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Ingresa un numero positivo (ingresa un numero negativo para terminar): ");
    scanf("%d", &n);

    while (n <= 100) {
        sum += n;
        printf("Ingresa otro numero positivo (ingresa un numero negativo para terminar): ");
        scanf("%d", &n);
    }

    printf("La suma de los numeros ingresados es: %d\n", sum);
    return 0;
}
