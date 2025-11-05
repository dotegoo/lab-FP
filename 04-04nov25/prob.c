#include <stdio.h>
#include <math.h>
int prob1(){
    int sir[100],vmin=2147483647,n;
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
int prob2(){
    float sir[100],n;
    float suma=0;
    printf("cate elemente are sirul: ");
    scanf("%f",&n);
    for(int i=0;i<n;i++){
        scanf("%f",&sir[i]);
        suma+=pow(sir[i],2);
    }
    printf("norma= %.2f\n",sqrt(suma));
    int norma=sqrt(suma);
    for(int i=0;i<n;i++){
        sir[i]=sir[i]/norma;
        printf("Elementul %d normalizat este %f\n",i,sir[i]);
    }
    return 0;}
int prob3(){
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
            for(int j=0;j<col;j++){
                if(matr[i][j]<matr[i][j-1]){
                    tmp=matr[i][j];
                    matr[i][j]=matr[i][j-1];
                    matr[i][j-1]=tmp;
                    }
                }
    for(int i=0;i<rand;i++){
        for(int j=0;j<col;j++)
            printf("%d ",matr[i][j]);
        printf("\n");
    }
    return 0;
}
int prob4(){
    int matr[100][100], rand, col,tmp;
    printf("cate randuri are matricea: ");
    scanf("%d",&rand);
    printf("cate coloane are matricea: ");
    scanf("%d",&col);
    for(int i=0;i<rand;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&matr[i][j]);
    for(int i=1;i<rand;i+=2)
        for(int k=0;k<col;k++)
            for(int j=0;j<col;j++){
                if(matr[i][j]<matr[i][j-1]&&matr[i][j-1]%2==0&&matr[i][j]%2==0){
                    tmp=matr[i][j];
                    matr[i][j]=matr[i][j-1];
                    matr[i][j-1]=tmp;
                    }
                }
    for(int i=0;i<rand;i++){
        for(int j=0;j<col;j++)
            printf("%d ",matr[i][j]);
        printf("\n");
    }
    return 0;}
int main(){
    prob1();
    prob2();
    prob3();
    prob4();
    return 0;
}