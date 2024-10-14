#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2;
	char c;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i", &num1, &c, &num2);
	
	int result;
	
	if(c=='+')
	  result=num1+num2;
	else if(c=='-')
	  result=num1-num2;
	else if(c=='*')
	  result=num1*num2;
	else
	  result=num1/num2;
	
	printf("=%i", result);
	
	return 0;
}
