#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b) {
    int output;
	output=a+b;
	return output;	
}

int square(int n) {
	return(n*n);
}

int get_max(int x, int y) {
	if(x>y) return (x);
	else return (y);
}

int main() {
	int c, d;
	
	printf("Enter the integers: ");
	scanf("%i %i", &c, &d);
	
	int result_sum = sumTwo(c, d);
	int result_square = square(c);
	int result_max = get_max(c, d);
	
	printf("Result - Sum: %i, Square: %i, Max: %i\n", result_sum, result_square, result_max);
	
	return 0;
}
