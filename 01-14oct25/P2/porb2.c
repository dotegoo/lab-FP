#include <stdio.h>
int main(){
    int a,b,c;
    float med;
    printf("Citeste primul numar: "); 
    scanf("%d",&a);
    printf("\nCiteste al doilea numar: ");
    scanf("%d",&b);
    printf("\nCiteste al treilea numar: ");       
    scanf("%d",&c);
    med=(a+b+c);
    med/=3;
    printf("Media aritmetica a numerelor este: %f",med);

    return 0;
}