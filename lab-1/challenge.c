#include <stdio.h>

int main (){

    printf ("+----------------+--------+--------+");
    printf ("\n%s","| Name");
    printf ("%19s","| Score1");
    printf ("%12s","| Score2 |\n");
    printf ("+----------------+--------+--------+");
    printf ("\n%s","| Alice");
    printf ("%19s","|      85");
    printf ("%10s","|    90  |\n");
    printf ("%s","| Bob  ");
    printf ("%19s","|      78");
    printf ("%10s","|    82  |\n");
    printf ("%s","| Charl");
    printf ("%19s","|      92");
    printf ("%10s","|    88  |\n");
    printf ("+----------------+--------+--------+");
    
    //printf ("\n%-20s*","programming");
    //printf ("\n%.3s*","programming");
    
    return 0;

}