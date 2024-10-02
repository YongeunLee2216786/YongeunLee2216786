#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	int a, b, c, d, e;
	
	printf("Input two integers: ");
	scanf("%i", &x);
	scanf("%i", &y);
	
	a=x+y;
	b=x-y;
	c=x*y;
	d=x/y;
	e=x%y;
	
	printf("+ result is %i\n", a);
	printf("- result is %i\n", b);
	printf("* result is %i\n", c);
	printf("/ result is %i\n", d);
	printf("%% result is %i\n", e);
	
	return 0;
}
