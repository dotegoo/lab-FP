#include <stdio.h>
int interschimbare(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Dupa interschimbare, valoarea lui a este: %d\n", a);
    printf("Dupa interschimbare, valoarea lui b este: %d\n", b);
    return 0;
}
int main() {
    int a,b;
    printf("Introduceti doua numere intregi: ");
    scanf("%d %d", &a, &b);
    interschimbare(a,b);
    return 0;
}