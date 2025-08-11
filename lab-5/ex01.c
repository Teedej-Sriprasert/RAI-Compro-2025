#include<stdio.h>

int main()
{
    int i,j;
    int num[10];
     
    for(i = 0; i < 10; i++)
    {
        printf ("Enter value %d here : ",i+1);
        scanf ("%d", &num[i]);
    }
    printf("Values in array are:");
    for(j = 0; j < 10; j++)
    {
        printf("%d, ",num[j]);
    }
    return 0;
}