#include <stdio.h>

int main(){

    char litera_mica;
    printf("Scrie o litera mica: ");
    scanf("%c",&litera_mica);
    printf("Litera mica %c este %c\n",litera_mica,litera_mica-32);
    return 0;
}