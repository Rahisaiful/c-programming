#include<stdio.h>

int main() {
    int a, b;

    scanf( "%d %d", &a, &b );

    // summation
    int summation = a + b;
    printf( "%d + %d = %d\n", a, b, summation );
    // subtraction
    int subtraction = a - b;
    printf( "%d - %d = %d\n", a, b, subtraction );
    // multiplication
    int multiplication = a * b;
    printf( "%d * %d = %d\n", a, b, multiplication );
    // division
    float division = a * 1.0 / b;
    printf( "%d / %d = %0.2f\n", a, b, division );
    return 0;

}