#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int a, b;
	
	printf("enter two integers:");
	scanf("%d, %d", &a, &b);
	
	float a_float=a;
	float b_float=b;
	
	printf("%f / %f = %f\n", a_float, b_float, a_float / b_float);
	
	return 0;
	
}
