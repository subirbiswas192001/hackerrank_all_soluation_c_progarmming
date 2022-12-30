#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int a =n*2 -1, b;
      int i,j;
      for( i =0; i<a;i++)
      {
          for(j =0;j<a;j++)
          {
             b = i<j ?i:j;
             b = b<a-i? b : a-i-1;
             b = b<a-j-1 ? b : a-j-1;
             printf("%d ", n-b);
          }
          printf("\n");
      }
    return 0;
}