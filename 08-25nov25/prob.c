#include <stdio.h>
#include <string.h>

int prob1(){
       char str1[32],str2[32];
    fgets(str1,32,stdin); 
    scanf("%s", str2);
    printf("Sirul 1: %s", str1);
    printf("Sirul 2: %s\n", str2);
    return 0;
    //programul citeste doua siruri de caractere si le afiseaza la ecran.
    //Primul sir este citit folosind fgets, iar al doilea folosind scanf.
    //Observatie: fgets pastreaza caracterul newline ('\n') la sfarsitul sirului daca exista spatiu suficient in buffer.
    //In schimb, scanf se opreste la primul spatiu sau newline, deci nu include acest caracter in sirul citit.
    //Astfel, la afisare, primul sir va include newline-ul, iar al doilea nu.
    //Acest comportament poate afecta formatul output-ului.
}
int prob2(){
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
int prob3(){
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
int prob4(){
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
int main(){
    prob1();
    prob2();
    prob3();
    prob4();
    return 0;
}