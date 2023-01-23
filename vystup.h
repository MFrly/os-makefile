#include <stdio.h>

float input(int rank) {

    float value;
    int countOfChar;
    do {
        printf("Type a value of %d. receipt (type zero to exit):\n", rank);
        scanf("%f", &value);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You haven't typed a real number. Try again.\n");
        } else if (value < 0) {
            printf("Value has to be a positive number or zero. Try again.\n");
        }
    } while (countOfChar != 0 || value < 0);

    return value;
}
