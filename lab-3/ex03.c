#include <stdio.h>

int main (){

    /*
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num > 100 || num < 1){
        printf("%d is out of range", num);
    }
    else if (num % 2 == 0 && num <= 100 && num >= 1) {
        printf("%d is Ev
        
    } 
    else if(num % 2 != 0 && num <= 100 && num >= 1) {
        printf("%d is Odd.\n", num);
    }
    */

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    switch (num >= 1 && num <=100)
    {
    case 1:
        switch (num % 2)
        {
        case 0:
            printf("%d is Even.\n", num);
            break;
        case 1:
            printf("%d is Odd.\n", num);
            break;
        }
        break;

    case 0:
        printf("%d is out of range", num);
        break;
    
    default:
        break;
    }

    return 0;

}