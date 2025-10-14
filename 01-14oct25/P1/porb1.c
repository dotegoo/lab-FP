#include<stdio.h>
int main(){
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