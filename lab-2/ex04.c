#include<stdio.h> 
int main() 
{ 
    
    //float fnum; 
    char name[20];
    int id;
    int proscore;
    float pscore;
    float cscore;
    //int age;
    //float height;
    //float weight;
    //char gender;
    //char education[20];
    

    printf ("Enter your Name: ");
    scanf ("%s", name);
    
    printf ("Enter your student ID: ");
    scanf ("%d", &id); 

    printf ("Enter your Programming score: ");
    scanf ("%d", &proscore);
    
    printf ("Enter your Physics score: ");
    scanf ("%f", &pscore);

    printf ("Enter your Calculus score: ");
    scanf (" %f", &cscore);

    float gpa = (proscore + pscore + cscore)/3; 
    printf("Hi %s(%d)! Your GPA is %0.2f\n",name,id,gpa);
    return 0; 
}