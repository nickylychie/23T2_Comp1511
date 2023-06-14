// Nicole, 23T2 Week 3
// Tutorial enums demo

#include <stdio.h>

// what are the different parts of this enum?
// enum opal_card_type is the name of this new datatype
enum opal_card_type {
    ADULT, // 0
    CONCESSION = 10, 
    CHILD, // 1
    STUDENT // 2
};

int main(void) {

    // create a variable to store an enum?
    enum opal_card_type nicole = STUDENT;
    // "enum opal_card_type" is the datatype

    printf("adult is of type      %d\n", ADULT);
    printf("concession is of type %d\n", CONCESSION);
    printf("child is of type      %d\n", CHILD);

    printf("I have opal type: %d\n", nicole);
    
    return 0;
}