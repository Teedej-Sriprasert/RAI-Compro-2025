#include<stdio.h> 
int main() 
{ 
    
    //float fnum; 
    char name[20];
    int age;
    float height;
    char university[20];
    //int proscore;
    //float pscore;
    //float cscore;
    //int age;
    
    //float weight;
    //char gender;
    
    

    printf ("Enter your full name: ");
    scanf ("%[^\n]", name);
    
    printf ("Enter your age: ");
    scanf ("%d", &age); 

    printf ("Enter your height: ");
    scanf ("%f", &height);
    
    printf ("Enter you University name: ");
    scanf ("%s", university);

    printf("\nHi! Everyone. This is %s from %s. I am %d years old and my height is %0.1f cm tall.\n",name,university,age,height);
    return 0; 
}