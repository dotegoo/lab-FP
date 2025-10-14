#include <stdio.h>

int main(){
    int zi,luna,an;
    scanf("%d",&zi);
    scanf("%d",&luna);
    scanf("%d",&an);
    an%=100;
    printf("Anul este %d/%d/",zi,luna);
    if(an<=9){
        printf("0%d",an);
    }
    return 0;
}