#include <stdio.h>

int main(){
    int v[10][10], l,c,k,cnt=0;
    printf("Introduceti numarul de linii, coloane si nr elemente nule de gasit per coloana/linie:\n");
    scanf("%d %d %d", &l, &c, &k);
    printf("Introduceti elementele matricei:\n");
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &v[i][j]);
            }
    }
    printf("Coloanele cu %d elemente nule sunt:\n", k);
    for(int j=0;j<c;j++){
        for(int i=0;i<l;i++)
            if(v[i][j]==0)
                cnt++;
        if(cnt==k)
            for(int i=0;i<l;i++)
                printf("%d ", v[i][j]);
        printf("\n");
        cnt=0;
    }
    printf("\nLiniile cu %d elemente nule sunt:\n", k);
    for(int j=0;j<l;j++){
        for(int i=0;i<c;i++)
            if(v[i][j]==0)
                cnt++;
        if(cnt==k)
            for(int i=0;i<l;i++)
                printf("%d ", v[i][j]);
        printf("\n");
        cnt=0;
    }
    
    return 0;}