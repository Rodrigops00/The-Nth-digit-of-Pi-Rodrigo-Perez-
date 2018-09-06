// Rodrigo Perez Solis
// A01411278
// 06/09/2018
// The Nth digit of Pi

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double pi = 0;
    // Le pedimos al usuario que nos ponga cuantos decimales quiere para pi.
    printf("Place the numbers of decimal places for pi : ");
    scanf("%d", &n);
// Esta es la formula.
    for(int j = 0; j < n; j++){
        pi+= pow(16,-j) * (4.0 / (8.0*j+1) - 2.0/(8*j+4) - 1/(8.0*j+5) - 1.0/(8*j+6));

    }
    printf("%.*lf",n,pi);
    return 0;
}
