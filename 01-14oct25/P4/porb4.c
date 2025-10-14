#include <stdio.h>

int main(){

    int ora,min,sec,ora1,ora2,min1,min2,sec1,sec2;
    scanf("%d",&ora1);
    scanf("%d",&ora2);
    scanf("%d",&min1);
    scanf("%d",&min2);
    scanf("%d",&sec1);
    scanf("%d",&sec2);
    ora=ora1+ora2;
    min=min1+min2;
    sec=sec1+sec2;
    while(sec>=60){
        sec-=60;
        sec++;
    }
    while(min>=60){
        min-=60;
        ora++;
    }
    printf("%d ore, %d minute %d secunde",ora,min,sec);
    return 0;
}