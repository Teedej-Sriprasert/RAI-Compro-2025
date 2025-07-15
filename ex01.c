#include <stdio.h>
#include <string.h>

int main (){

    int id;
    char name[25];
    char birth[25];


    printf("What's your student ID :");
    scanf("%d", &id);

    printf("\nWhat's your name :");
    fgets(name, 25, stdin);

    printf("\nWhat's your birth day answer with xx/xx/xx:");
    fgets(birth, 25, stdin);

    printf("Your student id is %d", id);
    printf("Hello %s", name);
    printf("You're born in %s", birth);

    printf("\n%50s*","http://krai.io");
    printf("Bye Bye");

    if (fgets(name, 25, stdin)) {
        // Remove the newline character if it exists
        size_t len = strlen(25);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
    }
    
    return 0;

}