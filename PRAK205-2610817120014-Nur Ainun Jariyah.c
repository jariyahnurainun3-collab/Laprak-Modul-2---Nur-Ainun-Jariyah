#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, alas, tinggi, keliling, luas;

    scanf("%lf %lf", &A, &B);

    C = sqrt((B * B) - (A * A));

    alas = round(C);
    tinggi = round(A);

    keliling = alas + tinggi + B;
    luas = 0.5 * alas * tinggi;

    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
} 