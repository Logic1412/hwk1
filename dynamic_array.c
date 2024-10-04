#include "dynamic_array.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define HERE printf("You need to implement this code HERE!")

// This should return an array with 0 entries, capable
// of holding only 1 entry initially, but it ends up expanding
// later on.
DynamicIntArray *allocate_int_array(){
  HERE;
  return NULL;
}

// This returns the element at the index.  Like Python lists
// and standard C arrays, the first element is at index 0.
//
// Unlike standard C arrays this performs bounds-checking:
// if the element doesn't exist (e.g. its out of range),
// this should return -1 as the value.
//
// In a better language we'd throw an exception 
// (EG, what python does), but C does not support any
// form of execption handling.
int get_int(unsigned int index, DynamicIntArray *data){
  HERE;
  return 0;
}

// Like get, but instead of returning the element it returns
// a POINTER to the element.  This way it can be used for
// setting the value at a location.  It also provides an
// alternate way to get the data (have the code be *(set_int(...))
// instead of get_int(...) ).
//
// Again, this should perform bounds checking, and return
// NULL if the index is invalid.
//
// Additionally, the pointer returned is intended to be 
// short lived:  It is considered undefined behavior to 
// dereference this pointer if between when set_int was 
// called and the pointer is used, there is a subsequent
// call to append()
int *set_int(unsigned int index, DynamicIntArray *data){
  HERE;
  return 0;
}

// This should free all the memory in the dynamic array,
// both the array that stores the actual data and the
// structure itself.
void deallocate_int_array(DynamicIntArray *data){
  HERE;
}

// This should add on an element at the end, resizing the
// array if necessary.  

// Basically, it should see if there is already enough capacity.
// If so, just add the element on to the end of internal array and return.

// Otherwise, it is necessary to realloc the internal array
// to increase its size, doubling it each time.  So the internal
// array starts at size 1, doubles to size 2, then 4, then 8, and 
// so on.
void append(int element, DynamicIntArray *data){
  HERE;
}

// A boolean test on "is the index in the range of the array".
// Hint, you probably want to use this for both get_int and set_int
// to keep your checks in one place.
bool present(unsigned int index, DynamicIntArray *data){
  HERE;
  return false;
}
