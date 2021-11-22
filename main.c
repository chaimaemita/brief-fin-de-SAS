#include <stdio.h>
#include <stdlib.h>

void CompteBancaire ();

struct compte
{
    char CIN[10];
    char NOM[20];
    char PRENOM [20];
    float montant;
};


int main()
{
    int choix;
    MENU:
        do
        {

    printf("Menu principale \n");
    printf("1-Introduire un compte bancaire: \n2-Introduire plusieurs comptes bancaire: \n3-Operations: \n4-Afichage: \n5-Fidalisation: \n6-Quitter l'application.\n");
    scanf("%d",&choix);

    switch (choix)
    {
    case 1:
        printf("Introduire un compte bancaire: \n");
        int l=1;
        printf("veuillez remplir la fiche suivante: \n");
        CompteBancaire ();
        printf("\n Votre compte bancaire a ete cree avec succes. \n");
        scanf(" ");
        printf("Pour revenir au menu principale, entrez 0. \n");
        scanf("%d",&l);
        if (l == 0)
        {
            goto MENU;
        }
        break;
    case 2:
        printf("Introduire plusieurs comptes bancaires:\n");
        printf("veuillez remplir la fiche suivante: \n");

    default:
        break;
    }while(choix <1 || choix >6);

    return 0;
}



