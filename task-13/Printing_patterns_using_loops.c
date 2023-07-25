#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
  	int arr [2*n-1][2*n-1] ;
    for(int x=0;x<=n;x++){
    for (int i=0+x ; i<n*2-1-x ; i++){

        for (int j=0+x ; j<n*2-1-x ; j++){

         arr [i][j] = n-x;

        }
    }}

   for (int i=0 ; i<n*2-1 ; i++){

        for (int j=0 ; j<n*2-1 ; j++){

         printf("%d ", arr [i][j]);

        }
        printf("\n");
    }
    return 0;
}
