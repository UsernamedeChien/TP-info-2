#include <stdio.h>

int n = 1000;

int pascal(long long (*triangle)[n]){
     triangle[0][0]=1;
    for (int i=1; i<n; i++){
        triangle[i][0] = 1;
        for (int j = 1; j < i; ++j){
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle[i][i] = 1;
    }
}

void main(void){
    
    long long triangle[n][n];
  
    pascal(triangle);

    for (int i=0; i<n; i++){
        printf("\n");

        for (int j = 0; j <= i; ++j)
             printf(" %lld", triangle[i][j]);
    }
}
