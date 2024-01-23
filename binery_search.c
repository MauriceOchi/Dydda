// Binary search function

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 3;

    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Initialize variables
    int low = 0;
    int high = size - 1;
    int found = 0;  // Flag to indicate whether the target is found

    // Binary search algorithm
    while (low <= high) {
        int midpoint = (low + high) / 2;

        if (numbers[midpoint] == target) {
            printf("Found at index %d\n", midpoint);
            found = 1;  // Set the flag to true
            break;      // Exit the loop since the target is found
        } else if (numbers[midpoint] > target) {
            high = midpoint - 1;
        } else {
            low = midpoint + 1;
        }
    }

    // Check the flag to determine if the target was found
    if (!found) {
        printf("Target not found\n");
    }

    return 0;
}