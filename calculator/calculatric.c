#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){
    float nb1,nb2;
    char operateur;
    char calcul;

    do{
        printf("entrer le premiere nombre:");
        scanf(" %f",&nb1);

        printf("\nEntrer la deuxieme nombre:");
        scanf(" %f",&nb2);

        printf("\nEntrer l'operateur(x,+,-,/): ");
        scanf(" %c",&operateur);

        switch (operateur)
        {
        case 'x':
            printf("%.2f x %.2f=%.2f\n",nb1,nb2,nb1*nb2);
            break;

        case '+':
            printf("%.2f + %.2f=%.2f\n",nb1,nb2,nb1+nb2);
            break;

        case '-':
            printf("%.2f - %.2f=%.2f\n",nb1,nb2,nb1-nb2);
            break;

        case '/':
            if(nb2!=0)
                printf("%.2f / %.2f=%.2f\n",nb1,nb2,nb1/nb2);
            else
                printf("Erreur: la division par zéro est impossible\n");
            break;
        
        default :
            printf("Operateur n'est pas valable \n");
            break;
        }
        printf("tu veux continuer?[Y/n]");
        scanf(" %c",&calcul);

    } while(calcul=='y'||calcul=='Y');

    return 0;
}