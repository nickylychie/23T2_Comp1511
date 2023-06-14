// Nicole, 23T2 Week 3
// Tutorial structs demo

#include <stdio.h>

// what are the different parts of this struct?
struct person {
    double height;
    char first_name_initial;
    int fav_number;
};

int main(void) {

    // initialise struct person
    struct person tommy;
    tommy.height = 2.5;
    tommy.first_name_initial = 't';
    tommy.fav_number = 1;
    
    // initialise the values inside the struct person you 
    // just created

    // print a struct person

    printf("Tommy is %lfcm tall, his name starts with %c, and his fav number is %d", 
    tommy.height,tommy.first_name_initial, tommy.fav_number);
    
    return 0;
}