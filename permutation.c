#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void cal(int j){
    int k=0;
          if(j%2==0)
        {
            j=0;
        }
        else
        {
            j=j+k;
            j=k;
        }
}

int main() {
    int a,i,j;
    printf("enter number how much you want");
    scanf("%d",& a);
    for ( i = 0; i < a; i++)
    {
        scanf("%d",&j);
        cal(j);
    }
    
   
}