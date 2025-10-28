#include <stdio.h>
int main(){

    int v[10],x[10],cnt;
    cnt=0;
    for(int i=0; i<10; i++)
        scanf("%d", &v[i]);
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
            if(v[i]<v[j]){
                int aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
        for(int i=0;i<10;i++)
            if(v[i+1]==v[i]+1){
                cnt=0;
                x[i]=v[i];
                for(int k=i+1;k<10;k++){
                    if(v[k]==v[k-1]){
                        x[k]=v[k];
                        cnt++;}
                    else
                    break;
                }
                if(cnt>5){
                    for(int j=0;j<cnt;j++)
                        printf("%d ", x[j]);

                }
            }
    for(int i=0; i<10; i++)
      printf("%d ", v[i]);
    return 0;
}