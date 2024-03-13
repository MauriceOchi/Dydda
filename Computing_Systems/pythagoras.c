#include <stdio.h>

int Squared(int a);

int main(void) {
    int maxC;

    printf("Enter the maximum length of hypotenuse: ");
    scanf("%d", &maxC);

    for (int sideC = 1; sideC <= maxC; sideC++) {
        for (int sideB = 1; sideB <= sideC; sideB++) {
            for (int sideA = 1; sideA <= sideB; sideA++) {
                if (Squared(sideC) == Squared(sideA) + Squared(sideB))
                    printf("%d %d %d\n", sideA, sideB, sideC);
            }
        }
    }
}

// Calculate the square of a number
int Squared(int a) {
    return a * a;
}
