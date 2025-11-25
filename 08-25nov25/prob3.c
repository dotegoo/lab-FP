#include <stdio.h>
#include <string.h>
int main(){
    char str1[128], str2[128];
    int varsta1, varsta2;
    printf("Introdu primul nume: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Introdu varsta: ");
    scanf("%d", &varsta1);
    getchar(); 
    printf("Introdu al doilea nume: ");
    fgets(str2, sizeof(str2), stdin);
    printf("Introdu varsta: ");
    scanf("%d", &varsta2);

    if(varsta1 < varsta2){
        printf("%s", str1);
    } else if(varsta2 < varsta1){
        printf("%s", str2);
    } else {
        printf("%s\n%s", str1, str2);
    }
    return 0;
}
