#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int a ,int b)
{
    int c;
          for (c=a; c<=b; c++)
      {
          if(c<10)
          {
              if(c==1)
              {
                   printf("one\n");
              }
              else if(c==3)
              {
                  printf("three\n");
              }
             else if(c==4)
              {
                  printf("four\n");
              }
              else if(c==5)
              {
                  printf("five\n");
              }
              else if(c==6)
              {
                  printf("six\n");
              }
              else if(c==7)
              {
                  printf("seven\n");
              }
              else if(c==8)
              {
                  printf("eight\n");
              }
              else if(c==9)
              {
                  printf("nine\n");
              }  
          }
          else {
              if(c%2==0)
              {
                  printf("even\n");
              }
              else{
                  printf("odd\n");
              }
          }
      }
      

}

int main() 
{
    int a, b,c;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
   fun(a,b);
    return 0;
}

