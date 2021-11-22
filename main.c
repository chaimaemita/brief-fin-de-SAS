#include <stdio.h>
#include <stdlib.h>
struct compteUSER
{
    char CIN[10];
    char NOM[20];
    char PRENOM [20];
    float montant;
}User;


void CompteBancaire ()
{
    int check = 0;
    struct  User;
    printf("NOM: \n\t");
    scanf("%s",User.NOM);
    printf("PRENOM: \n\t");
    scanf("%s",User.PRENOM);
    printf("CIN: \n\t");
    scanf("%d",User.CIN);

}


int main()
{
    int choix;
    MENU:


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

    return 0;
    }
}



