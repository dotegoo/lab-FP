#include <stdio.h>
int suma_cifre(int numar){
    int suma = 0;
    while(numar != 0){
        suma += numar % 10;
        numar /= 10;
    }
    return suma;
}
int main(){
    int numar, suma=0;
    printf("Introduceti un numar: ");
    scanf("%d", &numar);
    suma = suma_cifre(numar);
    printf("Suma cifrelor numarului este: %d\n", suma);
    return 0;
}