#include <stdio.h>
int main() {
    int v[10];
   for(int i=0; i<10; i++) 
        scanf("%d", &v[i]);
    for(int i=0; i<10; i++) 
        printf("%d ", v[i]);
    printf("\n");
    for(int i=9; i>=0; i--) 
        printf("%d ", v[i]);
    printf("\n");
    float ma=0;
    for(int i=0; i<10; i++) 
        ma += v[i];
    ma/= 10;
    int p=0;
    printf("Media: %.3f\n", ma);
    printf("Cat este pragul maxim pe care sa nu il depaseasca orice element?");
    scanf("%d", &p);
    for(int i=0; i<10; i++) 
        if(v[i] > p)
        printf("%d ", v[i]);
    return 0;
}