#include <stdio.h>

int main (){

    int value[10];
    int even = 0;
    int odd = 0;


    for(int i = 1 ; i <11 ; i++)
    {
        printf("Enter value %d : ",i);
        scanf("%d",&value[i]);
    }

    for (int i = 1 ; i <11 ; i++)
    {
        if (value[i]%2 == 0)
            even++;
        else
            odd++;
    }
    printf ("\nEven numbers: %d\n",even);
    printf ("\nOdd numbers: %d\n",odd);

    return 0;
}