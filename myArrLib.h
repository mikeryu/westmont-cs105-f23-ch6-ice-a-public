/** 
 * Westmont College Fall 2023
 * CS 105 Programming Languages
 * In-class Exercise for Chapter 6
 * 
 *    DO NOT MODIFY THIS FILE!
 */

typedef struct myIntArrDef {
    int size;
    int* arr;
} IntArray;

IntArray createIntArray();
void printSlice(IntArray intArray);
void keepPrintingSlice(IntArray intArr);

