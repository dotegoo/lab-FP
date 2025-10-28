#include <stdio.h>
int main(){
    int v[10], elmin=2147483647,ma=0;
    for(int i=0; i<10; i++){
        scanf("%d", &v[i]);
        ma+=v[i];
        if(v[i]<elmin)
            elmin=v[i];
        }
        ma/=10;
        printf("Elementul minim se afla pe pozitia/le");
    for(int i=0; i<10; i++){
        if(v[i]==elmin)
            printf("%d ", i);
        if(v[i]<ma){
            v[i]=ma;
        }
    }

        return 0;
}