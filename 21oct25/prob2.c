#include <stdio.h>
int main() {
    int val,maxi;
    maxi=0;
    do{
      printf("introdu un numar\n");
      scanf("%d",&val);

      if(val>maxi) {
        maxi=val;
      }
      printf("Pentru a iesi din program introdu 0\nPentru a continua introdu orice alt numar\n");
    }while(val!=0);
    printf("Cel mai mare numar introdus este: %d\n",maxi);

    return 0;
}