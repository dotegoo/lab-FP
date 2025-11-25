#include <stdio.h>
#include <string.h>
int main(){
    char str[128];
    printf("Introdu un sir de caractere: ");
    fgets(str, sizeof(str), stdin);
    int i=0;
    while(str[i]!='\n'){
        i++;
    }
    printf("Lungimea sirului (fara newline) este: %d\n", i);
    return 0;
}