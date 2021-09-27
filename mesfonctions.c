//
// Created by FLOC'H LYNN on 20/09/2021.
//
#include<stdio.h>
#include "mesfonctions.h"


int exercice1 (int a, int b)
{
    if (a>b)
    {
        printf("le plus grand entier est : %d \n",a);
    }

    else
    {
        printf("le plus grand entier est : %d \n",b);
    }

}

int exercice2 (int longueur, int largeur)
{
    printf("Le périmètre du rectangle est : %d \n", (2*longueur)+ (2*largeur));
    printf("L'aire du rectangle est : %d \n", longueur*largeur);
}

int exercice3 (int entier)
{
    const int trois=3;
    (entier >=10)
        ? printf("L'entier %d est supérieur ou égal à 10 \n",entier)
        : printf("L'entier %d n'est pas supérieur au égal à 10 \n",entier);


    (entier %trois==0)

        ? printf("L'entier %d est un multiple de 3\n ", entier)
        : printf("L'entier %d n'est pas un multiple \n "),entier;

}

#define Tarif_Enfant 4
#define Tarif_Jeune 6
#define Tarif_Senior 6
#define Plein_Tarif 9
int exercice4 (int age)
{
    int étudiant;
    printf("Etes-vous étudiant ? Si oui mettre 1, sinon mettre 0 \n");
    scanf("%d",&étudiant);

    if (étudiant ==1 && age<27)
    {
        printf("Le tarif est:%d \n",Tarif_Jeune);
    }
    else
    {
        if (age<12){
            printf("Le tarif est: %d \n",Tarif_Enfant);
        }
        else if (age==12 && age<=17)
        {
            printf("Le tarif est: %d \n",Tarif_Jeune);
        }
        else if (age>=65){
            printf("Le tarif est: %d \n",Tarif_Senior);
        }
        else {
            printf("Le tarif est: %d \n",Plein_Tarif);
        }
    }
}

void exercice5 ()
{
    int numéroBoisson;
    printf("Saisir le numéro de la boisson: \n");
    scanf("%d",&numéroBoisson);
    if (numéroBoisson==1){
        printf("La boisson choisie est un IceTea .\n");
    }

    else if (numéroBoisson==2){
        printf("La boisson choisie est un Coca. \n");
    }
    else if (numéroBoisson==3){
        printf("La boisson choisie est un Orangina. \n");
    }
    else if (numéroBoisson==10){
        printf("La boisson choisie est un Chocolat Chaud. \n");
    }
    else if (numéroBoisson==11){
        printf("La boisson choisie est un Café. \n");
    }
    else {
        printf(" Vous n'avez pas saisi le bon numéro de boisson.");
    }
}

void exercice6()
{
    float n1,n2,n3;
    printf("Saisir 3 notes au clavier : \n");
    scanf("%f %f %f", &n1,&n2,&n3);

    while (n1>20 || n1<0)
    {
        printf("Votre note n'est pas conforme. Saisissez une autre note: %f \n",n1);
        scanf("%f",&n1);
    }
    while (n2>20 || n2<0)
    {
        printf("Votre note n'est pas conforme. Saisissez une autre note: %f \n",n2);
        scanf("%f",&n2);
    }
    while (n3>20 || n3<0)
    {
        printf("Votre note n'est pas conforme. Saisissez une autre note: %f \n",n3);
        scanf("%f",&n3);
    }
    printf("La moyenne des 3 notes est : %f \n",(n1+n2+n3)/3);

}

void exercice7()

{
    int nombreClasses, nombreElevesClasses, i, nombreElevesTotal=0;
    printf("Saisir le nombre de classes ouvertes : \n");
    scanf("%d",&nombreClasses);

    for (i=1;i<(nombreClasses +1); i++)
    {
        printf("Saisir le nombre d'élèves de la classe : \n");
        scanf("%d",&nombreElevesClasses);
        nombreElevesTotal=nombreElevesTotal+nombreElevesClasses;
    }
    printf("Le nombre d'élèves total est : %d \n", nombreElevesTotal);

}

void exercice8()
{
    int n=0;
    printf("Saisir un nombre entier: \n");
    scanf("%d",&n);

    while (n % 2 != 0 || n % 7 != 0)
    {
        printf("Saisissez un autre entier : \n",n);
        scanf("%d",&n);
    }

    printf("L'entier saisi  %d est un multiple de 2 et de 7.\n ",n);

}

void exercice9()
{
    int nombrePierres, nombreEtages,nombrePierresRestantes,nombrePierresUtilisées;
    printf("Saisir le nombre de pierres disponibles : \n");
    scanf("%d",&nombrePierres);

    nombrePierresRestantes = nombrePierres;
    while (nombrePierresRestantes >= nombreEtages*nombreEtages)
    {
        nombrePierresUtilisées = nombrePierresUtilisées+ nombreEtages*nombreEtages;
        nombrePierresRestantes = nombrePierresRestantes-nombrePierresUtilisées;
        nombreEtages++;
    }

    printf("Avec %d pierres, vous pouvez construire %d étages.", nombrePierres,nombreEtages);
}

void exercice10()
{
    int n;
    float nombreValeurs = 0, valeurAjouté = 0;

    do
    {
        printf("Saisissez des nombres entiers poisitifs (Nombre négatif pour arrêter) : \n");
        scanf("%d",&n);

        valeurAjouté = valeurAjouté + n;
        nombreValeurs++;
    }
    while (n>=0);

        valeurAjouté = valeurAjouté - n;
        nombreValeurs--;

    printf("La moyenne des nombres saisis est : %f \n", valeurAjouté/nombreValeurs);

}