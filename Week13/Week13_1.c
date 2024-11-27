#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct student {
	int ID;
	char name[10];
	double grade;
};

int main(void) {
	struct student s={24, "Eunju", 4.200000};
	
	printf("input the ID: ");
	scanf("%i", &s.ID);
	
	printf("input the name: ");
	scanf("%s", s.name);
	
	printf("input the grade: ");
	scanf("%lf", &s.grade);

	printf("ID : %i\n", s.ID);
	printf("name : %s\n", s.name);
	printf("grade : %f\n", s.grade);
}
