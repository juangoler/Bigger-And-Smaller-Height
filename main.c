#include <stdio.h>

int main(){

    int altura [15];
    int maior, menor;

    for (int i = 0; i < 15; i++) {
        printf ("Digite a altura da pessoa %d (em cm): ", i + 1);
        scanf ("%d", &altura[i]);

        if (i == 0){
            maior = altura[i];
            menor = altura[i]; 
        } else {
            if (altura[i] > maior) {
                maior = altura[i];
        }
            if (altura[i] < menor) {
                menor = altura[i];
            }
        }
    }

    printf("\nA maior altura digitada foi: %d cm\n", maior);
    printf("A menor altura digitada foi: %d cm\n", menor);

    return 0;
}