#include <stdio.h>

int pascal(int i, int j)
{
    if (i==0 && j==0){
        return 1;
    }
    if (i==0)   // et j!=0 si on veut
    {
        return 0;
    }
    return pascal ( i - 1 , j ) + pascal ( i - 1 , j - 1 );
}

void affiche_pascal(int n){
    for (int ligne =0; ligne<n; ligne++){
        for (int colonne=0; colonne <= ligne; colonne ++){
            printf("%i ", pascal (ligne,colonne));
        }
        printf("\n");
    }
}

int main(){
    affiche_pascal(10);
}