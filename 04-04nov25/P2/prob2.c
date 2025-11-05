#include <stdio.h>
#include <math.h>
int main(){
    float sir[100],n;
    float suma=0;
    printf("cate elemente are sirul: ");
    scanf("%f",&n);
    for(int i=0;i<n;i++){
        scanf("%f",&sir[i]);
        suma+=pow(sir[i],2);
    }
    printf("norma= %.2f\n",sqrt(suma));
    int norma=sqrt(suma);
    for(int i=0;i<n;i++){
        sir[i]=sir[i]/norma;
        printf("Elementul %d normalizat este %f\n",i,sir[i]);
    }

    return 0;
}