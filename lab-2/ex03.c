#include<stdio.h> 
int main() 
{ 
    //int num;
    //float fnum; 
    char name[20];
    int age;
    float height;
    float weight;
    char gender;
    char education[20];

    printf ("Enter your Name: ");
    scanf ("%s", name);
    
    printf ("Enter your Age: ");
    scanf ("%d", &age); 

    printf ("Enter your height: ");
    scanf ("%f", &height);
    
    printf ("Enter your weight: ");
    scanf ("%f", &weight);

    printf ("Enter your gender: ");
    scanf (" %c", &gender);

    printf ("Enter your Education Qualification: ");
    scanf ("%s", education);

    printf("\nName: %s\t Age: %d\t Gender: %c\n", name,age,gender);
    printf("Height: %0.1f\t Weight: %f\t \n", height,weight);
    printf("Education: %s\n ", education);
    return 0; 
}