#include <stdio.h>

int main() {
    int a,b,c;    
    printf("Introdu 3 numere intregi:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c) {
        printf("Triunghi echilateral");
    } else if(a==b || b==c || a==c) {
        printf("Triunghi isoscel");
    } else if((a<<1)+(b<<1)==c<<1||(b<<1)+(c<<1)==a<<1||(a<<1)+(c<<1)==b<<1) {
        printf("Triunghi dreptunghic");
    } else if((a+b)<c || (b+c)<a || (a+c)<b) {
        printf("Triunghi oarecare");
    }

    return 0;
}