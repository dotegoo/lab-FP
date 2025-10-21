#include <stdio.h>
int factorial(int x){
    if(x==0 || x==1){
        return 1;
    } else {
        return x*factorial(x-1);
    }
}
int main(){
    int n=10,m;
    printf("Introdu un numar intreg pozitiv mai mic sau egal decat 10:\n");
    scanf("%d",&m);
    int comb=factorial(n)/(factorial(m)*factorial(n-m));
    printf("Numarul de combinari de %d luate cate %d este: %d\n",n,m,comb);

    return 0;
}