#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID;
	int score;
};

void main(void) {
	struct student s[STUDENTNUM];
	int i;
	
	for(i=0;i<STUDENTNUM;i++)
	{
		printf("Input the ID: ");
		scanf("%i", &s[i].ID);
		
		printf("Input the score: ");
		scanf("%i", &s[i].score);
	}
	
	int sum=0;
	for(i=0;i<STUDENTNUM;i++)
	{
		sum+=s[i].score;	
	}
	double average=(double)sum/STUDENTNUM;
	printf("The average of the score: %f\n", average);
	
	int max=s[0].score;
	int maxIndex=0;
	for(i=0;i<STUDENTNUM;i++)
	{
		if(s[i].score>max) {
		   max=s[i].score;
		   maxIndex=i;	
		}
	}
	printf("The highest score - ID: %i, score: %i", s[maxIndex].ID, max);
	
}
