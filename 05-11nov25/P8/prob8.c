#include <stdio.h>
int maxi(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    printf("Introduceti doua numere intregi: ");
    scanf("%d %d", &a, &b);
    maxi(a,b);
    while(a!=0){
        scanf("%d", &a);
        maxi(a,b);
        if(maxi(a,b)>a)
            b=maxi(a,b);
        else
            b=a;
    }
    printf("Cel mai mare numar introdus este: %d\n", b);
    
    return 0;
}