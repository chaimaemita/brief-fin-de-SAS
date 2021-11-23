#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct compteUSER
{
    char CIN[10];
    char NOM[20];
    char PRENOM [20];
    float montant;
}User;

struct compteUSER db[50];
int i = 0;

void MENU ()
{
   printf("\n1- Creer un  compte \n");
   printf("2- Creer plusieurs comptes \n");
   printf("3- Afficher mon compte/solde \n");
   printf("4- Operations \n");
   printf("6- Affichage \n");
   printf("7- Quitter l'application \n\n");
}

int main()
{
    int choix,c,l=1;
    printf("*****************YOUCODE BANC******************\n");
    MENU ();
     while (1){
    scanf("%d",&choix);
    switch (choix)
    {
    case 1:
        printf("creer un compte : \n");
        printf("veuillez remplir la fiche suivante: \n");
        CompteBancaire ();
        printf("Pour revenir au menu principale, entrez 0. \n");
        scanf("%d",&l);
        if (l == 0)
        {
            MENU ();
        }
        break;

    case 2:
       printf("creer plusieurs comptes bancaire: \n");
       otherAcc ();
       printf("Pour revenir au menu principale, entrez 0. \n");
        scanf("%d",&l);
        if (l == 0)
        {
            MENU ();
        }
       break;
    case 3:
        printf("Operations: \n");
        printf("1- Depot.\n");
        printf("2- Retrait. \n");
        scanf("%d",&c);
        if(c == 1)
        {
           depotMoney ();
        }
        else
        {
            retraitMoney ();
        } break;

    return 0;
}
}
}
void CompteBancaire ()
{
    struct compteUSER User;
    printf("*****VOS INFORMATIONS*****\n");
    printf("NOM: \n\t");
    scanf("%s",User.NOM);
    printf("PRENOM: \n\t");
    scanf("%s",User.PRENOM);
    printf("CIN: \n\t");
    scanf("%s",User.CIN);
    printf("montant: \n\t");
    scanf("%f",&User.montant);
    printf("\n\t VOTRE COMPTE A ETE CREER AVEC SUCCES.\n");
    db[i++] = User;
}
void otherAcc ()
{
       int n,i=1;
       printf("\nVeuillez entrer le nombre du nouveax comptes que vous voulez creer:");
       scanf("%d",&n);
       printf("Veuillez remplir la fiche suivante: \n");
       do
       {
           CompteBancaire ();
           i++;
       }while (i<=n);
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
        if(strcmp(db[b].CIN,cin) == 0)
        {
            db[b].montant -= som;
            break;
        }
        b++;
    }
}
/*void OrdreAscendant ()
{
    int i,j,tmp;
    printf("Affichage des comptes par ordre Ascendant:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

        }
    }

}
*/

