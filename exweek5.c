#include <stdio.h>

int main (){

    int num1;
    int num2;
    int menu;

    printf("Enter Num1 :");
    scanf("%d", &num1);

    printf("Enter Num2 :");
    scanf("%d", &num2);
    
    printf("Calculator Menu:\n1. +\n2. -\n3. *\n4. /\n");

    printf("Choose menu :");
    scanf("%d", &menu);

    if(menu == 1){

        int sum = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, sum);
    }

    else(menu == 2){

        int sub = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, sub);
    }

    else(menu == 3){

        int mul = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, mul);
    }

    else(menu == 4){

        float di = num1 / num2;
        printf("%d / %d = %.2f\n", num1, num2, di);
    }

    return 0;

}