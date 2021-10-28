#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -17.8;
    upper = 148.9;
    step = 10.418750000000001;

    celsius = lower;

    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32;
        printf("%10.1f %10.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}