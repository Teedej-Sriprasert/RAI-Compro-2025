#include <stdio.h>

int main (){
    int sum = 0;
    float average;
    for(int i = 1;i <=10; i++){

        int num;
        printf("%d.Enter the number:", i);
        scanf("%d", &num);
        sum = sum + num;
        
    }
    
    average = sum / 10;
    printf("\nTotal sum is %d\n", sum);
    printf("Average is %.2f", average);
    return 0;

}