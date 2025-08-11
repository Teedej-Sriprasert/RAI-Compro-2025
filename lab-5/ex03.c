#include <stdio.h>

int main (){

    int mark[5];
    int sum = 0;
    int temp;

    for(int i = 1 ; i <6 ; i++)
    {
        printf("Enter the marks of student %d : ",i);
        scanf("%d",&mark[i]);
        sum = sum + mark[i];
    }

    for (int i = 0; i < 6 ; i++)
    {
        if (mark[i]>mark[i+1])
        {
            temp = mark[i+1];
            mark[i+1] = mark[i];
            mark[i] = temp;
        }
    }

    printf("Total Marks : %d",sum);
    printf("Highest Marks: %d",mark[5]);

    return 0;
}