#include <stdio.h>

int main(){

    int sum;
    int i = 0;
    int sum2 =0;
    
    while (i<=10)
    {
        printf("Enter the number: ");
        scanf("%d",&sum);
        sum2 = sum2 + sum;
        i++;
    }
    
    printf("\nTotal sum is %d\n", sum2);

    return 0;

}