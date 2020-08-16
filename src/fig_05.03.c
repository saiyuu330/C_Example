// Fig. 5.3.c: fig05.03.c
// Creating and using a programmer-defined function.
#include <stdio.h>

int square(int y); // function prototype

int main(void){
	// loop 10 times and calculate and output square of x each time
	for(int x = 1; x <= 10; ++x){
		printf("%d  ", square(x)); // function call
	}
	
	puts("");
}

// square function definition returns the square of its parameter
int square(int y){ // returns the square of y as an int
	return y * y; // returns the square of y as an int
}