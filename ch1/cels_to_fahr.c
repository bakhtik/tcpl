#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for celsius = -20, 0, 20, ..., 150; folating-point version */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 150;
    step = 20;

    printf("Celsius Fahr\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}
