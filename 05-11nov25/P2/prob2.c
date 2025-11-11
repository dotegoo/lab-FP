#include <stdio.h>
int prime(int nr1, int nr2){
    int prime=0;
    if(nr1 > nr2) {
        for(int i=3;i<=nr1;i++){
            if(nr2%i!=0 && nr1%i!=0)
                prime=1;
            if(prime==0){
                printf("Numerele %d si %d nu sunt prime intre ele.\n", nr1, nr2);
                break;
            }
        }
    }
    else if(nr2 > nr1) {
        for(int i=3;i<=nr2;i++){
            if(nr1%i!=0 && nr2%i!=0)
                prime=1;
            if(prime==0){
                printf("Numerele %d si %d nu sunt prime intre ele.\n", nr1, nr2);
                break;
            }
        }
    }
    if (prime==1)
        printf("Numerele %d si %d sunt prime intre ele.\n", nr1, nr2);
    
    return 0;
}
int main() {
 
    int nr1, nr2;
    printf("Introduceti doua numere intregi: ");
    scanf("%d %d", &nr1, &nr2);
    prime(nr1, nr2);
    
    return 0;
}