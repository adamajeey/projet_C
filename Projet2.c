#include <stdio.h>
#include <stdlib.h>
int main()
{
    char NomElev[50];
    float NoteMath[2], NoteAnglais[2], NotePc[2], NoteFrancais[2];
    float Moy_math=0, Moy_anglais=0, Moy_pc=0, Moy_francais=0, MoyGenerale;
    float Som_math=0,Som_anglais=0, Som_Pc=0, som_Francais=0;
    int const coefMath=4, coefAnglais=2, coefPc=3, coefFrancais=4, coefTolal;
    int i;

        printf("Veillez entrez votre Nom svp: ");
        fgets(NomElev, 50, stdin);
    
    for (int i = 0; i < 2; i++)
    {
        printf("Entez la note en math %d: ", i+1);
        if (scanf("%f", &NoteMath[i]) ==0 || NoteMath[i]>20 || NoteMath[i]<0)
        {
            printf("La note doit etre un nombre entre 0 et 20 ");
            return 0;  
        }
        Som_math=Som_math+NoteMath[i];
    }
        Moy_math=(Som_math*coefMath)/2;


    for (int i = 0; i < 2; i++)
    {
        printf("Entrez la note en aglais %d: ", i+1);
       if (scanf("%f", &NoteAnglais[i]) ==0 || NoteAnglais[i]>20 || NoteAnglais[i]<0)
       {
          printf("La note doit etre un nombre entre 0 et 20 ");
          return 0;
       }
        Som_anglais=Som_anglais+NoteAnglais[i];
    }
        Moy_anglais=(Som_anglais*coefAnglais)/2;

    for (int i = 0; i < 2; i++)
    {
        printf("Entrez le note en Pc %d: ", i+1);
        if (scanf("%f", &NotePc[i]) ==0 || NotePc[i]>20 || NotePc[i]<0)
        {
            printf("La note doit etre un nombre entre 0 et 20 ");
            return 0;  
        }
        Som_Pc=Som_Pc+NotePc[i];
    }
        Moy_pc=(Som_Pc*coefPc)/2;
    
    for (int i = 0; i < 2; i++)
    {
        printf("Entrez la note en francais %d: ", i+1);
        if (scanf("%f", &NoteFrancais[i]) ==0 || NoteFrancais[i]>20 || NoteFrancais[i]<0)
        {
            printf("La note doit etre un nombre entre 0 et 20 ");
            return 0;  
        }
        som_Francais=som_Francais+NoteFrancais[i];
    }
        Moy_francais=(som_Francais*coefFrancais)/2;

    MoyGenerale=(Moy_math+Moy_anglais+Moy_pc+Moy_francais)/13;
    printf("%s Votre moyenne est: %1.f\n", NomElev,MoyGenerale);

    if (MoyGenerale<10)
    {
        printf("C'est Mediocre\n\n");
    }
    else if (MoyGenerale==10)
    {
        printf("C'est Passable\n\n");
    }
    else if (MoyGenerale>=11 && MoyGenerale<=14)
    {
        printf("C'est Très bien\n\n");
    }
    else
    {
        printf("C'est Excellent\n\n");
    }
    
    return 0;
}