#include<stdio.h> 
int main() 
{ 
    int num;
    float fnum; 
    char ch;

    printf ("Please enter an integer value: "); 
    scanf ("%d", &num);  
    printf ("You entered %d", num); 

    printf ("\nPlease enter a float value: ");
    scanf ("%f", &fnum); 
    printf ("You entered %0.2f", fnum);

    printf ("\nPlease enter a character: ");
    scanf (" %c", &ch); 
    printf ("You entered %c\n", ch);

    return 0; 
}