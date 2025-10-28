#include <stdio.h>
#include <math.h>

int main() {
    double m = 0.05;
    double q = 2e-6;
    double g = 9.8;
    double alpha = 15.0;

    double rad = alpha * M_PI / 180.0;

    double E = (m * g * tan(rad)) / q;

    printf("Cuong do dien truong E = %.2f V/m\n", E);

    return 0;
}
