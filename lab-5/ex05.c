#include <stdio.h>

int main (){

    int value[80];
    
    int temp;

    for(int i = 1 ; i <9 ; i++)
    {
        printf("Enter value %d : ",i);
        scanf("%d",&value[i]);
        
    }

    for (int i = 1; i < 9 ; i++)
    {
        if (value[i]>value[i+1])
        {
            temp = value[i+1];
            value[i+1] = value[i];
            value[i] = temp;
        }
    }

    for (int i = 1; i < 9 ; i++)
    {
        if (value[i]<value[i+1])
        {
            temp = value[i+1];
            value[i+1] = value[i];
            value[i] = temp;
        }

    }
    printf("Largest number: %d\n",value[8]);
    printf("smallest number: %d",value[0]);
    return 0;
}