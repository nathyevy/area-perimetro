#include <stdio.h> 

int main () {
    
    float ba,alt,ar,pe;
    
    printf ("Informe a altura e a base do retângulo \n");
    scanf ("%f%f", &alt, &ba);
    ar = ba * alt;
    pe = (alt *2) + (ba * 2);
    printf ("A sua área e o seu perímetro é de %.2f \n%.2f", ar, pe);
    
     return 0;
}