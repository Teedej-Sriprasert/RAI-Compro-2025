#include <stdio.h>

int main (){

    float radius;
    float length;
    float resistivity;

    printf("Enter Radius of Resistor (m) :");
    scanf("%f", &radius);

    printf("Enter Length of Resistor (m) :");
    scanf("%f", &length);
    
    printf("Enter Resistivity of Resistor :");
    scanf("%f", &resistivity);
    
    float r;

    r = (resistivity * length)/(3.14 * radius * radius);
    printf("The value off this resistor = %0.2f OHM\n", r);

    return 0;

}