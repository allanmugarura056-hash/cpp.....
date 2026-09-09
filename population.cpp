// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.


#include <stdio.h>

int main()
{
    long population = 312032486;

    int secondsPerYear = 365 * 24 * 60 * 60;

    int birthsPerYear = secondsPerYear / 7;
    int deathsPerYear = secondsPerYear / 13;
    int immigrantsPerYear = secondsPerYear / 45;

    int annualChange = birthsPerYear - deathsPerYear + immigrantsPerYear;

    printf("Year 1: %ld\n", population + annualChange);
    printf("Year 2: %ld\n", population + 2 * annualChange);
    printf("Year 3: %ld\n", population + 3 * annualChange);
    printf("Year 4: %ld\n", population + 4 * annualChange);
    printf("Year 5: %ld\n", population + 5 * annualChange);

    return 0;
}