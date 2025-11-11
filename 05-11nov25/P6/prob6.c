#include <stdio.h>
int mediana(int a, int b, int c){
    int med;
    if((a<=b && b<=c) || (c<=b && b<=a))
        med=b;
    else if((b<=a && a<=c) || (c<=a && a<=b))
        med=a;
    else
        med=c;
    printf("Numarul median este: %d\n", med);
    return med;
}
int media(int a, int b, int c){
    float medie;
    medie=(a+b+c)/3.0;
    printf("Media aritmetica este: %.2f\n", medie);
    return medie;
}
int main() {
    int a,b,c;
    printf("Introduceti trei numere intregi: ");
    scanf("%d %d %d", &a, &b, &c);
    mediana(a,b,c);
    media(a,b,c);
    return 0;
}