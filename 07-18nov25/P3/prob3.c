#include <stdio.h>
int elminvect(int v[],int n){
    int min=2147483647;
    for(int i=0;i<n;i++){
        if(v[i]<min){
            min=v[i];
        }
    }
    printf("Valoarea minima este: %d\nAceasta apare pe pozitia/le: ",min);
    for(int i=0;i<n;i++){
        if(v[i]==min){
           printf("%d ",i);
        }
    }
    return 0;}
int main() {
    int n;
    scanf("%d", &n);
    int v[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    elminvect(v, n);
    return 0;
}