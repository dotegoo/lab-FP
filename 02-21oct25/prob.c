#include <stdio.h>
#include <math.h>
int factorial(int x){
    if(x==0 || x==1){
        return 1;
    } else {
        return x*factorial(x-1);
    }
}
int prob1(){
    int a,b,c;    
    printf("Introdu 3 numere intregi:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c) {
        printf("Triunghi echilateral");
    } else if(a==b || b==c || a==c) {
        printf("Triunghi isoscel");
    } else if((a<<1)+(b<<1)==c<<1||(b<<1)+(c<<1)==a<<1||(a<<1)+(c<<1)==b<<1) {
        printf("Triunghi dreptunghic");
    } else if((a+b)<c || (b+c)<a || (a+c)<b) {
        printf("Triunghi oarecare");
    }
    return 0;
}
int prob2(){
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
int prob3(){
    int n=10,m;
    printf("Introdu un numar intreg pozitiv mai mic sau egal decat 10:\n");
    scanf("%d",&m);
    int comb=factorial(n)/(factorial(m)*factorial(n-m));
    printf("Numarul de combinari de %d luate cate %d este: %d\n",n,m,comb);

    return 0;
}
int prob4(){
    float r1,r2,x;
    printf("Introdu un numar:\n");
    scanf("%f",&x);
    r1=x/2;
    r2=((r1+x)/r1);
    while(fabs(r2-r1)>=0.01){
        
        r2=(r1+x/r1)/2;
        r1=r2/2;
        printf("Valoarea aproximativa a radacinii patrate este: %f\n",r2);
    }

    printf("Radacina patrata a numarului %f este: %f\n",x,r2);
    return 0;
}

int main(){
prob1();
prob2();
prob3();
prob4();
return 0;
}
    