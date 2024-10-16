#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer(int x) {
	printf("Enter the value: ");
	scanf("%i", &x);
	
	return x;
}

int factorial(int n) {
	int i=1;
	int res=1;
	for(i=1; i<=n; i++)
	  res=res*i;
	return res;
}

int combination(int n, int r) {
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(void) {
	int n, r;
    int result;
    
    n=get_integer(n);
    r=get_integer(r);
    
    result=combination(n, r);
    
    printf("The result of C(%i, %i) is %i\n", n, r, result);

    return 0;
}
