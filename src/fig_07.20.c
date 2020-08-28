// Fig. 7.20: fig07_20.c
// Using indexing and pointer notations with arrays.
#include <stdio.h>
#define ARRAY_SIZE 4

int main(void){
	int b[] = {10, 20, 30, 40}; // create and initialize array b
	int *bPtr = b; // create bPtr and point it to array b
	
	// output array b using array index notation
	puts("Array b printed with:\nArray index notation");
	
	// loop through array b
	for(size_t i = 0; i < ARRAY_SIZE; ++i){
		printf("b[%lu] = %d\n", i, b[i]);
	}
	
	// output array b using array name and pointer/offset notation
	puts("\nPointer/offset notation where\n"
		 "the pointer is the array name");
	
	// loop through array b
	for(size_t offset = 0; offset < ARRAY_SIZE; ++offset){
		printf("*(b + %lu) = %d\n", offset, *(b + offset));
	}
	
	// ouput array b using bPtr and array index notation
	puts("\nPointer index notation");
	
	// loop through array b
	for(size_t i = 0; i < ARRAY_SIZE; ++i){
		printf("bPtr[%lu] = %d\n", i, bPtr[i]);
	}
	
	// output array b using bPtr and pointer/offset notation
	puts("\nPointer/offset notation");
	
	// loop through array b
	for(size_t offset = 0; offset < ARRAY_SIZE; ++offset){
		printf("*(bPtr + %lu) = %d\n", offset, *(bPtr + offset));
	}
}