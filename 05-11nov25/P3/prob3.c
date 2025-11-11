#include <stdio.h>
int primasiultimacifra(int numar){
    int pc,uc;
    uc=numar%10;
    while(numar>=0)
    {
        pc=numar%10;
        numar=numar/10;
        if(numar<10)
            break;
    }
    printf("Ultima Cifre este: %d\n", uc);
    printf("Prima Cifra este: %d\n", pc);
    return 0;
}
int main(){
    int numar;
    printf("Introduceti un numar intreg: ");
    scanf("%d", &numar);
    primasiultimacifra(numar);
    return 0;
}