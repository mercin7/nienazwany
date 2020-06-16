#include <stdio.h>
#include "pole.h"
#include "obj.h"

int main(void)
{

    int menu=0;
    float a,wynik;
        for(;;)
    {
        printf("\nCo chcesz zrobić?\n1. Oblicz pole kwadratu:\n2. Oblicz pole i objętość sześcianu:\n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            printf("Podaj a:");
            scanf("%f",&a);
            if(a>=1)
            {
            wynik = kwadrat(a);
            printf("%f",wynik);
            printf("[m2]\n");
            break;
            }
            else{printf("Niepoprawne dane!");break;}
        case 2:
            printf("Podaj a:");
            scanf("%f",&a);
            if(a>=1)
            {
                wynik=szescian_pole(a);
                printf("%f",wynik);
                printf("[m2]\n");
                wynik = szescian_obj(a);
                printf("%f",wynik);
                printf("[m3]\n");
                break;
            }
            else{printf("Niepoprawne dane!");break;}
        default:
            printf("Niepoprawne dane");
        }

}

    return 0;
}
