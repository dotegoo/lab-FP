#include <stdio.h>
#include <math.h>
int prob1(){
    int n,ok=0;
    scanf("%d", &n);
    if(n%4==0){
        if(n>=400&n%400==0){
            ok=0;}
        else{
            ok=1;}
        }
        if(ok==1)
    printf("Adevarat");
    else
    printf("Fals");
    return 0;
}
int prob2(){
    int a,b,c;
    float med;
    printf("Citeste primul numar: "); 
    scanf("%d",&a);
    printf("\nCiteste al doilea numar: ");
    scanf("%d",&b);
    printf("\nCiteste al treilea numar: ");       
    scanf("%d",&c);
    med=(a+b+c);
    med/=3;
    printf("Media aritmetica a numerelor este: %f",med);

    return 0;
}
int prob3(){
    int zi,luna,an;
    scanf("%d",&zi);
    scanf("%d",&luna);
    scanf("%d",&an);
    an%=100;
    printf("Anul este %d/%d/",zi,luna);
    if(an<=9){
        printf("0%d",an);
    }
    return 0;
}
int prob4(){
    int ora,min,sec,ora1,ora2,min1,min2,sec1,sec2;
    printf("Introduceti ora, minutele si secundele pentru primul interval de timp: ");
    scanf("%d",&ora1);
    scanf("%d",&min1);
    scanf("%d",&sec1);
    printf("\nIntroduceti ora, minutele si secundele pentru al doilea interval de timp: ");
    scanf("%d",&ora2);
    scanf("%d",&min2);
    scanf("%d",&sec2);
    ora=ora1+ora2;
    min=min1+min2;
    sec=sec1+sec2;
    while(sec>=60){
        sec-=60;
        min++;
    }
    while(min>=60){
        min-=60;
        ora++;
    }
    printf("%d ore, %d minute %d secunde",ora,min,sec);
    return 0;
    }
int prob5(){
    char a;
    printf("Scrie un caracter ");
    scanf("%c",&a);
    printf("%c",a+5);
    return 0;
}
int prob6(){
     char litera_mica;
    printf("Scrie o litera mica: ");
    scanf("%c",&litera_mica);
    printf("Litera mica %c este %c\n",litera_mica,litera_mica-32);
    return 0;
}
int prob7(){
    int a=2;
    a=a<<0;
    printf("%d",a);
    return 0;
}
int main(){
    prob1();
    prob2();
    prob3();
    prob4();
    prob5();
    prob6();
    prob7();
    return 0;
}