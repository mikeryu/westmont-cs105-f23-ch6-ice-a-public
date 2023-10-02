/**
 * Westmont College Fall 2023
 * CS 105 Programming Languages
 * In-class Exercise for Chapter 6
 * 
 * Name: Boaty McBoatface
 * Email: bmcboatface@westmont.edu
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Structure and a Custom Type Definition
 * IntArray has integer `size` and int* array (contents) named `arr`.
 */
typedef struct myIntArrDef {
    int size;
    int* arr;
} IntArray;

/**
 * Creates a new IntArray by asking the user for its size and contents.
 * 
 *    You MUST use the `printf` statements as given to pass the autograder.
 *    Variable names in the code provided may be modified as you see fit.
 */
IntArray createIntArray() {
    // TODO: Declare variables at the top.

    printf("Size of array (1 or greater)? ");
    // TODO: Get the size of array from the user.
    // TODO: Allocate the space for the array in the heap using `malloc`.

    // TODO: Ask for user input to populate the array - use a loop here.
    printf("Integer to add at [%d]? ", ndx);
    
    printf("Array created.\n\n");
    return myIntArr;
}

/**
 * Prints a slice of given IntArray stating at ndxStart and ending before ndxEnd.
 * Printing format should be in a standard C-style array, e.g., "{1, 2, 3, 4, 5}".
 */
void printSlice(IntArray intArray, int ndxStart, int ndxEnd) {
    // TODO: Declare variables at the top.
    // TODO: Print the slice out assuming the arguments passed in are valid.
}

/**
 * Provides repeition and console I/O to interacvtively print the slices of given IntArray.
 * 
 *    DO NOT MODIFY THIS FUNCTION!
 */
void keepPrintingSlice(IntArray intArr) {
    int ndxStart;
    int ndxEnd;
    char isKeepGoing = 'Y';
    
    do {
        printf("Slice start index (inclusive)? ");
        scanf("%d", &ndxStart);
        printf("Slice end index (exclusive)? ");
        scanf("%d", &ndxEnd);
        
        printf("Here's your sice: ");
        printSlice(intArr, ndxStart, ndxEnd);
        printf("\n\n");
        
        printf("Again (Y/N)? ");
        scanf(" %c", &isKeepGoing);
    } while (isKeepGoing == 'Y' || isKeepGoing == 'y');

    printf("Bye!\n\n");
}