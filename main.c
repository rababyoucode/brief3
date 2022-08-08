#include <stdio.h>
#include <stdlib.h>
//POUR PETITE MOYENNE
float minmoy (float t[],int n){
    float min;
    int i;
    min = t[0];
   for (i=1;i<n;i++){
       if (min > t[i]){
            min= t[i];
   }
   }
   return min;
}
//POUR GRANDE MOYENNE
float maxmoy(float t[],int n){
    float max;
    int i;
    max = t[0];
    for(i=1;i<n;i++){
        if(max < t[i]){
            max = t[i];
        }
    }
return max;
}
int main() {
    int i,smoy,p,j,C1=13,C2=15;
    float classe_1[13],classe_2[15],tab[C1+C2],temp;
    printf("Veuillez entre  les notes de la premier classe : \n");
    for(i=0;i<C1;i++){
       printf("- Eleve %d : ",i+1);
       scanf("%f",&classe_1[i]);
    }
    printf("***************************************************\n");
    printf("Veuillez entre les notes de la deuxieme classe : \n");
    for(i=0;i<C2;i++){
       printf("- Eleve %d : ",i+1);
       scanf("%f",&classe_2[i]);
    }
    printf("***************************************************\n");
    printf("la plus petite moyenne pour la Classe 1 est :%.2f \n",minmoy(classe_1,C1));
    printf("la plus grande moyenne pour la Classe 1 est :%.2f \n",maxmoy(classe_1,C1));
    printf("***************************************************\n");
    printf("la plus petite moyenne pour la Classe 2 est :%.2f \n",minmoy(classe_2,C2));
    printf("la plus grande moyenne pour la Classe 2 est :%.2f \n",maxmoy(classe_2,C2));
    printf("***************************************************\n");
    smoy=0;
     for (i=0;i<13;i++){
       if (classe_1[i] >=10){
            smoy++;
       }
        if(classe_2[i] >= 10){
             smoy++;
        }
     }
     printf("le nombre des élèves avec une moyenne supérieur ou égale 10 dans les deux groupes est :%d \n",smoy);
//POUR CONCATENATION DES DEUX TABLEAUX
  p = C1 - 1;
  for(i=0;i<C1;i++){
      tab[i] = classe_1[i];
  }
  for(i=0;i<C2;i++){
      p++;
      tab[p] = classe_2[i];
  }
  //TRI PAR ORDRE CROISSANT
  for(i=0;i<p-1;i++){
for(j=i+1; j<p;j++){
if(tab[j]< tab[i]){
temp   = tab[i];
tab[i] = tab[j];
tab[j] = temp  ;

            }
        }
    }
    printf("les moyenne en ordre croissant par tri \n");
    for(i=0; i<p; i++ ){
        printf("%.2f \n", tab[i]);
    }
    return 0;
}


