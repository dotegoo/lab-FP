#include <stdio.h>
#include <string.h>

int main(){
    char a[128],b[128],c[128],abc[384],d[128],e[128],f[128],def[384];
    printf("Introdu primul sir de caractere: ");
    fgets(a, sizeof(a), stdin);
    printf("Introdu al doilea sir de caractere: ");
    fgets(b, sizeof(b), stdin);
    printf("Introdu al treilea sir de caractere: ");
    fgets(c, sizeof(c), stdin);
    strcpy(abc, a);
    strcat(abc, b);
    strcat(abc, c);
    printf("Sirul concatenat este:\n%s", abc);
    printf("Introdu al patrulea sir de caractere: ");
    fgets(d, sizeof(d), stdin);
    printf("Introdu al cincilea sir de caractere: ");
    fgets(e, sizeof(e), stdin);
    printf("Introdu al saselea sir de caractere: ");
    fgets(f, sizeof(f), stdin);
    int i=0;
    while(def[i]!='\n'){
        def[i]=d[i];
        i++;

    }
    i=0;
    while(def[i]!='\n'){
        def[i + strlen(d)]=e[i];
        i++;
    }
    i=0;
    while(def[i]!='\n'){
        def[i+ strlen(d) + strlen(e)]=f[i];
        i++;
    }
    printf("Sirul concatenat este:\n%s", def);
    return 0;
}