#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	int grade[5];
	int sum=0;
	int average;
	
	for(i=0;i<5;i++)
	{
		printf("Input value-grade[%i]=", i);
		scanf("%d", &grade[i]);
	}
	
	for(i=0;i<5;i++) {
		printf("grade[%d]=%d\n", i, *(grade+i));
		sum+=*(grade+i);
	}
	
	average=sum/5;
	
	printf("average: %d\n", average);
	
	return 0;
}
