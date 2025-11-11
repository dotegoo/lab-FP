#include <stdio.h>

int main(){
    int numar, suma=0;
    printf("Introduceti un numar: ");
    scanf("%d", &numar);
    while(numar != 0){
        suma += numar % 10;
        numar /= 10;
    }
    printf("Suma cifrelor numarului este: %d\n", suma);
    return 0;
}