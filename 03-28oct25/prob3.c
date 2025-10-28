#include <stdio.h>
int main(){
    int v[10], count=0;
    for(int i=0; i<10; i++)
        scanf("%d", &v[i]);
    for(int i=0; i<10; i++)
        if(v[i]==v[i+1])
            count++;
    printf("Numarul de elemente egale consecutive este: %d\n", count);
    return 0;
}