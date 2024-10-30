#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*static int sum=1;
int main(void)
{
	int sum=0;
	
	printf("sum=%d\n", sum);
	
	return0;
}*/

static int all_flies;

extern void sub();

int main(void) 
{
	sub();
	printf("%d\n", all_flies);
	return 0;
}
