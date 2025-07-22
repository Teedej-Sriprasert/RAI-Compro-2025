#include <stdio.h>

int main (){

    char name[25];
    int calculus;
    int physic;
    int science;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your Calculus score:");
    scanf("%d", &calculus);
    
    printf("Enter your Physic score:");
    scanf("%d", &physic);

    printf("Enter your Science score:");
    scanf("%d", &science);

    float average;
    average = (calculus + physic + science) / 3;

    if (average >= 80)
    {
        printf("%s, your average is %0.2f. You got grade A.\n", name, average);
    }
    else if (average < 80 && average >= 70)
    {
        printf("%s, your average is %0.2f. You got grade B.\n", name, average);
    }
    else if (average < 70 && average >= 60)
    {
        printf("%s, your average is %0.2f. You got grade C.\n", name, average);
    }
    else if (average < 60 && average >= 50)
    {
        printf("%s, your average is %0.2f. You got grade D.\n", name, average);
    }
    else if (average < 50)
    {
        printf("%s, your average is %0.2f. You got grade F.\n", name, average);
    }
    
    return 0;

}