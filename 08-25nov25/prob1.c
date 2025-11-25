#include <stdio.h>
#include <string.h>
int main() {
    char str1[32],str2[32];
    fgets(str1,32,stdin); 
    scanf("%s", str2);
    printf("Sirul 1: %s", str1);
    printf("Sirul 2: %s\n", str2);
    return 0;
}
//programul citeste doua siruri de caractere si le afiseaza la ecran.
//Primul sir este citit folosind fgets, iar al doilea folosind scanf.
//Observatie: fgets pastreaza caracterul newline ('\n') la sfarsitul sirului daca exista spatiu suficient in buffer.
//In schimb, scanf se opreste la primul spatiu sau newline, deci nu include acest caracter in sirul citit.
//Astfel, la afisare, primul sir va include newline-ul, iar al doilea nu.
//Acest comportament poate afecta formatul output-ului.