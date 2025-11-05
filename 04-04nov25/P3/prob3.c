#include <stdio.h>
int main() {
    int matr[100][100], rand, col,tmp;
    printf("cate randuri are matricea: ");
    scanf("%d",&rand);
    printf("cate coloane are matricea: ");
    scanf("%d",&col);
    for(int i=0;i<rand;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&matr[i][j]);
    for(int i=1;i<rand;i++)
        for(int k=0;k<col;k++)
        for(int j=0;j<col;j++)
        {
            if(matr[i][j]<matr[i][j-1])
            {
                tmp=matr[i][j];
                matr[i][j]=matr[i][j-1];
                matr[i][j-1]=tmp;
            }
        }
    for(int i=0;i<rand;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d ",matr[i][j]);
        printf("\n");
    }
    return 0;
}