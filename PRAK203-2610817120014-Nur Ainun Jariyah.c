#include <stdio.h>

int main() {
    float a, b, i, j, x, y, hasil;

    scanf("%f %f", &a, &b);
    scanf("%f %f", &i, &j);
    scanf("%f %f", &x, &y);

    hasil = (a - b) * i / j - (x + y);

    printf("%.3f\n", hasil);

    return 0;
}