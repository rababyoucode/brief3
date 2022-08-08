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
float moyenne10 (float t[],int n)
{
    int smoy = 0;
    int i;
    for (i=0; i<n; i++){
        if(t[i]>= 10){
            smoy++;
        }
    }
    return smoy;
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
    printf("le nombre des élèves avec une moyenne supérieur ou égale 10 dans la Classe 1 est :%.2f\n",moyenne10(classe_1,C1));

    printf("***************************************************\n");
    printf("la plus petite moyenne pour la Classe 2 est :%.2f \n",minmoy(classe_2,C2));
    printf("la plus grande moyenne pour la Classe 2 est :%.2f \n",maxmoy(classe_2,C2));
    printf("le nombre des élèves avec une moyenne supérieur ou égale 10 dans la Classe 1 est :%.2f\n",moyenne10(classe_2,C2));
    printf("***************************************************\n");
    //pour concactination
    for (i=0;i<=C1-1;i++){
        tab[i]=classe_1[i];
    }
    for(i=0;i<=C2-1;i++){
        tab[C1+i]=classe_2[i];
    }
    printf("le tableau regroupant les deux classe \n");
    for(i =0 ; i < C1+C2  ; i++)
    {
        printf("%.2f\n",tab[i]);
    }
    //pour tri
    for(i = 0; i < C1+C2; i++)
	    {
	        for (j = i+1; j < C1+C2; j++)
	        {
	            if(tab[j]<tab[i]) {
	                temp   = tab[i];
	                tab[i] = tab[j];
	                tab[j] = temp;
	            }
	        }
	    }
     printf("les moyenne en ordre croissant par tri \n");
    for(i=0; i<C1+C2; i++ ){
        printf("%.2f \n", tab[i]);
    }
    return 0;
}

