#include <stdio.h>
int interschimbare(int a, int b){
    a = a^b;
    b = a^b;
    a = a^b;
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
