#include <stdio.h>
int matrix(){
    int l,c,a[100][100];
    scanf("%d %d",&l,&c);
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
}
}
    printf("matricea are %d linii si %d coloane\n",l,c);
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");}
    return 0;
}
int main() {
    matrix();
    return 0;
}