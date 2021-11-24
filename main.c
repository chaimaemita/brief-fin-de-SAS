#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct compteUSER
{
    char CIN[10];
    char NOM[20];
    char PRENOM[20];
    float montant;
}User;

struct compteUSER db[50];
int i = 0;

void MENU ();
void backMENU ();
void CompteBancaire ();
void otherAcc ();
void depotMoney ();
void retraitMoney ();


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
        backMENU ();
        break;

    case 2:
       printf("creer plusieurs comptes bancaire: \n");
       otherAcc ();
       backMENU ();
       break;

    case 3:
        printf("Operations: \n");
        printf("1- Depot.\n");
        printf("2- Retrait. \n");
        scanf("%d",&c);
        if(c == 1)
        {
           depotMoney ();
           backMENU ();
        }
        else
        {
            retraitMoney ();
            backMENU ();
        } break;


    return 0;
}
}
}
void MENU ()
{
   printf("\n1- Creer un  compte \n");
   printf("2- Creer plusieurs comptes \n");
   printf("3- Operations \n");
   printf("4- Fidelisation \n");
   printf("5- Affichage \n");
   printf("6- Quitter l'application \n\n");
}
void backMENU ()
{
    int l=1;
    scanf("%d",&l);
    if (l == 0)
    {
        MENU ();
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
       int n,i;
       printf("\nVeuillez entrer le nombre du nouveax comptes que vous voulez creer:\n");
       scanf("%d",&n);
       printf("Veuillez remplir la fiche suivante: \n");
       for(i=0;i<=n;i++)
       {
           CompteBancaire ();
           i++;
       }
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
            printf("votre solde apres le depot est: %f",db[b].montant);
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
            printf("votre solde apres le retrait est: %f",db[b].montant);
            break;
        }
        b++;
    }
}
/*void OrdreAscendant (db[],int s)
{
    int i,j,tmp;
    printf("Affichage des comptes par ordre Ascendant:\n");
    for(i=0;i<s-1;i++)
    {
        for(j=0;j<s-1;j++)
        {
            if (db[j].montant>db[j+1].montant)
            {
                tmp[0]=db[j];
                db[j]=db[j+1];
                db[j+1]=tmp[0];
            }

        }
    }

}*/


