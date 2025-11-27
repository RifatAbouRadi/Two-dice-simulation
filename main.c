#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int TRIALS = 50000;   // number of dice rolls
    int counts[13] = {0};       // array for sums (index 2..12 used)

    srand(time(NULL));          // seed the random number generator

    for (int i = 0; i < TRIALS; i++) {
        int die1 = rand() % 6 + 1;  // random number 1..6
        int die2 = rand() % 6 + 1;
        int sum = die1 + die2;

        counts[sum]++;              // increase counter for this sum
    }

    // print all sums from 2 to 12
    for (int s = 2; s <= 12; s++) {
        printf("%2d: %d\n", s, counts[s]);
    }

    return 0;
}
