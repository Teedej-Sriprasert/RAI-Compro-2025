#include <stdio.h>

int main (){

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num > 100 || num < 1){
        printf("%d is out of range", num);
    }
    else if (num % 2 == 0 && num <= 100 && num >= 1) {
        printf("%d is Even.\n", num);
    } 
    else if(num % 2 != 0 && num <= 100 && num >= 1) {
        printf("%d is Odd.\n", num);
    }

    return 0;

}