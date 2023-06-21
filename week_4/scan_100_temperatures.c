// Nicole, Week 4 23T2
// Tutorial demo code

#include <stdio.h>

#define MAX_SIZE 100

int main(void) {

    // change this code to scan in temperatures until ctrl-d is pressed.
    // max 100 temperatures will be entered
    
    // make an array of size 6
    int temperatures[MAX_SIZE];

    int temp;
    int scanf_returns = scanf("%d", &temp);

    // scan 6 values into the array
    int i = 0;
    while (scanf_returns == 1) {
        temperatures[i] = temp;
        scanf_returns = scanf("%d", &temp);
        i++;
    }

    // find the highest value
    int largest = temperatures[0];
    int num_temps = i;
    i = 0;
    while (i < num_temps) {
        if (temperatures[i] > largest) {
            largest = temperatures[i];
        }
        i++;
    } 

    // print the highest
    printf("highest temperature is %d\n", largest);

    return 0;
}