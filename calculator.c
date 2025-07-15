#include <stdio.h>
#include <math.h>

int main (){

    float x,y,z;
    printf("Enter x : ");
    scanf("%f",&x);
    printf("Enter y : ");
    scanf("%f",&y);
    printf("x + y = %f\n",x + y);
    printf("x - y = %f\n",x - y);
    printf("x * y = %f\n",x * y);
    printf("x / y = %f\n",x / y);

    //z = fmod(x,y);
    //printf("x mod y = %f\n",z);
    z = x++;
    printf("z = x++; x =%0.2f, z = %0.2f\n", x,z);
    z = ++x;
    printf("z = ++x; x =%0.2f, z = %0.2f\n", x,z);
    z = y--;
    printf("z = y--; x =%0.2f, z = %0.2f\n", x,z);
    z = --y;
    printf("z = --y; x =%0.2f, z = %0.2f\n", x,z);
    
    return 0;

}