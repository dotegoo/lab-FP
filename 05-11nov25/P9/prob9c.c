#include <stdio.h>
int parcurgere(int a, int b){
    printf("%d",b);
    if(a==b)
        return a;
    else
        return parcurgere(a,b-1);
}
int main(){
    int a,b;
    printf("introduce ti a si b\n");
    scanf("%d%d",&a,&b);
    parcurgere(a,b);
}