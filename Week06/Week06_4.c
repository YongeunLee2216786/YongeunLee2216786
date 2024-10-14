#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum=0;
	int a;
	int i;
	
	printf("Enter a number: ");
	scanf("%i", &a);
	
	for(i=1; i<=a; i++) {
		sum+=i;
	}
	
	printf("The result is %i\n", sum);
	
	return 0;
}
