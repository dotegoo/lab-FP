#include <stdio.h>

int main(){
    int a[10][10],n;
    printf("Introduceti dimensiunea matricei patratice (max 10): ");
    scanf("%d", &n);
    printf("Introduceti elementele matricei:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    printf("Elementele de sub diagonala principala sunt:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i>j)
                printf("%d ", a[i][j]);
    }
    printf("\n");
    printf("Elementele de deasupra diagonalei principale sunt:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i<j)
            printf("%d ", a[i][j]);
    printf("\n");
    printf("Elementele deasupra diagonalei secundare sunt:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j<=n-2){
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
    printf("Elementele sub diagonala secundara sunt:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j>n-1){
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
    }