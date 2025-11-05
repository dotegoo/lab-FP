#include <stdio.h>
int main() {
    int sir[100],n,vmin=2147483647;
    printf("cate elemente are sirul: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&sir[i]);
        if(sir[i]<vmin)
            vmin=sir[i];
    }
    printf("valoarea minima este %d si se afla pe\n",vmin);
    for(int i=0;i<n;i++){
        if(sir[i]==vmin)
            printf("pozitia: %d\n",i);

    }

    
    return 0;
}