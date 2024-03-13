#include <stdio.h>

int Squared(int a);

int main(void) {
    int maxC;

    printf("Enter the maximum length of hypotenuse: ");
    scanf("%d", &maxC);

    for (int m = 2; m * m <= maxC; m++) {
        for (int n = 1; n < m; n++) {
            if ((m - n) % 2 != 0 && Squared(m) + Squared(n) <= Squared(maxC)) {
                int a = Squared(m) - Squared(n);
                int b = 2 * m * n;
                int c = Squared(m) + Squared(n);
                printf("%d %d %d\n", a, b, c);
            }
        }
    }
    return 0;
}

// Calculate the square of a number
int Squared(int a) {
    return a * a;
}
