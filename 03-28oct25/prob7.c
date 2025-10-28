#include <stdio.h>
int main(){
    int a[10][10], b[10][10],n,m;
    printf("Introduceti numarul de linii si coloane (max 10): ");
    scanf("%d %d", &n, &m);
    printf("Introduceti elementele matricei A:\n");
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        scanf("%d", &a[i][j]);
    printf("Introduceti elementele matricei B:\n");
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        scanf("%d", &b[i][j]);
    printf("Suma matricelor A si B este:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d ", a[i][j]+b[i][j]);
    printf("\n");}
    printf("Produsul matricelor A si B este:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=0;
            for(int k=0;k<m;k++){
                sum+=a[i][k]*b[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}