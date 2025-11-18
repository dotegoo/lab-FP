#include <stdio.h>
int funct(int a[3][3], int v1[3], int v2[3]){
    int cnt=0;
    for(int i=0;i<3;i++){
        int ok=1;
        for(int j=0;j<3;j++){
            if(a[i][j]!=v1[j])
                ok=0;
            }
        
        if(ok==1){
            for(int k=0;k<3;k++){
                a[i][k]=v2[k];
            }
            printf("s-a inlocuit linia %d\n",i);
            cnt++;
          }
          
    }
    if(cnt==0)
        printf("nu s-a inlocuit nicio linie");
    return 0;
}
int main(){
    int a[3][3],v1[3],v2[3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<3;i++)
        scanf("%d",&v1[i]);
    
    for(int i=0;i<3;i++)
        scanf("%d",&v2[i]);
    
    funct(a,v1,v2);
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            printf("%d",a[i][j]);
    return 0;
}