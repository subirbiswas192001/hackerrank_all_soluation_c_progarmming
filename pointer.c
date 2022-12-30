#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int abc,cba;
    abc=*a+*b;
    cba=*a-*b;
    if(cba<0)
    {
        cba=-cba;
    }
    *a=abc;
    *b=cba;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
