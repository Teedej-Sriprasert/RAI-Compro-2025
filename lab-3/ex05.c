#include <stdio.h>

int main (){

    int hight;
    int radius;

    printf("Enter cone hight: ");
    scanf("%d", &hight);

    printf("Enter cone base radius: ");
    scanf("%d", &radius);
    
    float volume;
    volume = (3.14 * radius * radius * hight)/3;

    printf("Cone volume = %0.1f\n", volume);

    if (volume >= 260){
        printf("This cone is perfect for Supun project\n");
    }
    else if (volume < 260){
        printf("This cone is not fit for this project\n");
    }

    return 0;

}