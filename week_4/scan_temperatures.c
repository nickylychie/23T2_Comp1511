// Nicole, Week 4 23T2
// Tutorial demo code
// scan in 6 temperatures and print out the highest

#include <stdio.h>

#define SIZE 6

int main(void) {

    // initialise variable
    // make an array of size 6
    int temperatures[6];

    // scan 6 values into the array
    int i = 0;
    while (i < 6) {
        scanf("%d", &temperatures[i]);
        i++;
    }

    // find the highest value
    int largest = temperatures[0];
    i = 0;
    while (i < 6) {
        if (temperatures[i] > largest) {
            largest = temperatures[i];
        }
        i++;
    } 

    // print the highest
    printf("highest temperature is %d\n", largest);

    return 0;
}