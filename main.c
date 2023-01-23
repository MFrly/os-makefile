#include <stdio.h>
#include "vystup.h"
#define ENTER '\n'


   float input(int rank);

int main() {
    float price;
    int rank = 0;
    float totalPrice = 0;
    do {
        rank++;
        price = input(rank);
        totalPrice += price;
    } while (price != 0);
    printf("Total price %.2f czk.\n", totalPrice);
    printf("Average price is %.2f czk.\n ", totalPrice / (rank - 1));

 

    return 0;
}
