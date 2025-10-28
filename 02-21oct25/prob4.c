#include <stdio.h>
#include <math.h>

int main() {
    float r1,r2,x;
    printf("Introdu un numar:\n");
    scanf("%f",&x);
    r1=x/2;
    r2=((r1+x)/r1);
    while(fabs(r2-r1)>=0.01){
        
        r2=(r1+x/r1)/2;
        r1=r2/2;
        printf("Valoarea aproximativa a radacinii patrate este: %f\n",r2);
    }

    printf("Radacina patrata a numarului %f este: %f\n",x,r2);
    return 0;
}
    