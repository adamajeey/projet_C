#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int verif(char reponse[25]);
int main()
{
/*/Déclaration des variables/*/
    int tab[3]={12345,1234,125};
    char reponse[25];
    int i=0;                        
    int cpt=0;
        printf("Veiller saisir votre code secret: ");  //Il demande à l'utilisateur d'entrer le code secré
        scanf("%s", reponse);  //l'utilisateur va ecrire son code secré
        while (verif(reponse)==0) /*/ Ici nous avons utilisé la boucle while qui va nous dire que tant que la fonction verif est fausse il va afficher veillez saisir un nombre/*/
        {
            printf("Veillez saisir un nombre: ");
            scanf("%s", reponse);
        }
        
    while (tab[i] != atoi(reponse)) /*/ Ici nous avons uliliser la boucle while qui veut tant que le caractère est différent de le reponse qu'on a converti en entier faire/*/
    {
        if (i<3) /*/ Ici nous avons la condition if qui va verifier le nombre de tentative pour dire d'il reste des essais ou bien le compte est bloqué/*/
        {
            i++; 
        }
        else{
            cpt++;
            i = 0;
            if (cpt == 3)
            {
                printf("Fin des tentatives, compte bloque ");
                return 0;
            }
            if (cpt == 2)
            {
                printf("il vous reste un essai: ");
            }
            else
            {
                printf("Le code secret est incorrect, veillez \nreessayer: ");
            }
            scanf("%s", reponse);
    while (verif(reponse)==0)
            {
                printf("Veillez saisir un nombre: ");
                scanf("%s", reponse);
            }
            
        }  
    }
     printf("Le code secret saisi est correct");
    return 0;
}
int verif(char reponse[25])
{
    int compteur=0;
    for (int i = 0; i < strlen(reponse); i++)
    {
        if (reponse[i]>='0'&& reponse[i] <='9')
        {
            compteur++;
        }
        
    }
        if (compteur == strlen(reponse))
        {
            return 1;
        }
        else
        {
            return 0;
        }
}