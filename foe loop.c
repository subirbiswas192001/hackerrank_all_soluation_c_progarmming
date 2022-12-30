#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a, b,c;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
   char num[11][6]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
   
   int d,i;
   for(i=a;i<=b;i++){
       if(i<=9)
       {
           d=i-1;
       }
       else if(i>9 && i%2 ==0){
           d =9+i%2;
       }
       else if(i>9 && i%2 !=0)
       {
           d=9+i%2;
       }
       printf("%s\n",num[d]);
   }
    return 0;
}

