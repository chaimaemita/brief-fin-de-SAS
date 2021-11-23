#include <stdio.h>
#include <stdlib.h>

struct compteUSER
{
    char CIN[10];
    char NOM[20];
    char PRENOM [20];
    float montant;
}User;

struct compteUSER db[50];
int i = 0;


void CompteBancaire ()
{
    struct compteUSER User;

    printf("NOM: \n\t");
    scanf("%s",User.NOM);
    printf("PRENOM: \n\t");
    scanf("%s",User.PRENOM);
    printf("CIN: \n\t");
    scanf("%s",User.CIN);
    printf("montant: \n\t");
    scanf("%f",&User.montant);
    db[i++] = User;
}



int main()
{
    int choix,c;
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

    case 2:
       printf("Troduire plusieurs comptes bancaire: \n");
       int n;
       printf("Veuillez remplir la fiche suivante: \n");
       CompteBancaire ();
       printf("le compte bancaire a ete cree avec succes. \n");
       do
       {
           printf(" Creer plusieurs comptes. \n");
           printf("combien de compte volez vous cree ?");                                                                               
           scanf("%d",&n);
           CompteBancaire ();
       }while (choix<0 || choix>n);
       break;

    case 3:
        printf("Operations: \n");
        printf("1-Depot.\n");
        printf("2-retrait. \n");
        scanf("%d",&c);
        if(c == 1)
        {
           depotMoney (); 
        }
        else 
        {
            retraitMoney ();
        } break;

    case 4:




    




    




    return 0;
}

void depotMoney ()
{
    int som;
    char cin[50];
    int b = 0;
    printf("depot:\n");
    printf("entrez votre CIN. \n");
    scanf("%s",cin);
    printf("entrez la somme: \n");
    scanf("%d",&som);
    // find user with cin
    while (b < 50){
        if (strcmp(db[b].CIN , cin) == 0){
            db[b].montant += som;
            break;
        }
        b++;
    }

}
void retraitMoney ()
{
    int som;
    char cin[50];
    int b = 0;
    printf("retrait:\n");
    printf("entrez votre CIN. \n");
    scanf("%s",cin);
    printf("entrez la somme: \n");
    scanf("%d",&som);
    //find user with cin
    while(b<50)
    {
        if(strcmp(db[b].CIN,cin) == 0)){
            db[b].montant -= som;
            break;
        }
        b++;
    }
}



