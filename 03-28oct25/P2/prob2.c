#include <stdio.h>

int main() {

    float v[10],max=-2147483648;

    for(int i=0; i<10; i++){
        scanf("%f", &v[i]);
        if(v[i]>max)
            max=v[i];
    }

    for(int i=0; i<10; i++)
        v[i]/=max;

    printf("Vectorul normalizat este:\n");
    for(int i=0; i<10; i++)
        printf("%.2f ", v[i]);

    return 0;}