#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,l1=0,l2=0,l3=0;
  for(i=1;i<=n;i++)
  for(j=i+1;j<=n;j++)
  {
      int and=i&j;
      int or=i|j;
      int xor=i^j;
      
      if(and<k && l1<and)
       l1=and;
       if(or<k && l2<or)
       l2=or;
       if(xor<k && l3<xor)
       l3=xor;
  }
  printf("%d\n",l1);
  printf("%d\n",l2);
  printf("%d\n",l3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
