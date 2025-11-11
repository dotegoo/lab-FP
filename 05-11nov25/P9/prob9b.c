#include <stdio.h>
int factorial(int numar){
    if(numar==0 || numar==1)
        return 1;
    else
        return numar*factorial(numar-1);
    }
int main(){
    int numar;
    printf("Introduceti un numar intreg: ");
    scanf("%d", &numar);
    printf("Factorialul numarului %d este: %d\n", numar, factorial(numar));
    return 0;
}