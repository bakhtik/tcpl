#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for faht = 0, 20, ..., 300; folating-point version */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahr Celsius\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9) * (fahr-32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
}
