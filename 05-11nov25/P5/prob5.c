#include <stdio.h>
int nrdivizori(int numar){
    int divizori=0,pd=0;
    for(int i=1;i<=numar;i++){
        if(numar%i==0)
            divizori++;
        if(pd==0&&i>=2)
            pd=i;
    }

    printf("Numarul de divizori ai numarului %d este: %d si are pe %d ca primul divizor", numar, divizori, pd);
    return divizori;
}
int main(){

    int numar;
    printf("Introduceti un numar intreg: ");
    scanf("%d", &numar);
    nrdivizori(numar);
    return 0;
}