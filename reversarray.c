#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    printf("\nenter nimber");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        printf("\nenter array element");
        scanf("%d", arr + i);
    }
    printf("the array is");
    for(i=1; i<=num; i++){
        printf("%d ",arr[i]);
    }



    
    

    for(i = 0; i < num; i++)
        printf("\n%d ", *(arr + i));
    return 0;
}