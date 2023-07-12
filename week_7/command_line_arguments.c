// Nicole, 23T2 Week 7
// Tutorial demo: Command Line Arguments

#include <stdio.h>

int main(int argc, char *argv[]) {

    // print total number of command line arguments
    printf("Total number of command line arguments: %d\n", argc);

    // print each command line argument on a new line
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}