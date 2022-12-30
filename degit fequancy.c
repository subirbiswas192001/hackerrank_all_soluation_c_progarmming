#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    char s[1024];
    scanf("%s",&s);
    char b[]={'0','1','2','3','4','5','6','7','8','9'};
    for(int i=0; i<10; i++)
    {
        a=0;
        for(int j=0; j<strlen(s);j++)
        {
            if(s[j]==b[i])
            {
                a++;
            }
        }
        printf("%d ",a);
    }
        
    return 0;
}
