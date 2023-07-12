// Nicole, 23T2 Week 7
// Tutorial demo: EOF loops

#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    char my_var[MAX_LETTERS];
    while (fgets(my_var, MAX_LETTERS, stdin) != NULL) {
        fputs(my_var, stdout);
    }

    return 0;
}