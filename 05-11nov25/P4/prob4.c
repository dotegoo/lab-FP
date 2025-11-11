#include <stdio.h>
int putere(float x, int y){
    float z=x;
    for(int i=1;i<=y;i++){
        x=x*z;
    }
    return x;
}
int main(){
    float x;
    int y;
    printf("Introduceti baza: ");
    scanf("%f", &x);
    printf("Introduceti exponentul: ");
    scanf("%d", &y);
    putere(x,y);
    
    return 0;

}