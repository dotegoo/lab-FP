#include <stdio.h>
int citvector(int n,int v[]) {
    for (int i = 0; i < n; i++) {
       scanf("%d",&v[i]);
    }
    return 0;
}

int main(){
int n;
scanf("%d",&n);
int v[100];
citvector(n,v);
for(int i=0;i<n;i++){
    printf("%d ",v[i]);
}
return 0;
}