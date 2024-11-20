#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE *fp;
	char word1[50], word2[50], word3[50];
	
	printf("input a word: ");
	scanf("%s", word1);
	
	printf("input a word: ");
	scanf("%s", word2);
	
	printf("input a word: ");
	scanf("%s", word3);
	
	fp=fopen("sample.txt", "w");
	if(fp==NULL) {
		printf("Failed to open file.\n");
		return 1;
	}
	
	fprintf(fp, "%s\n", word1);
	fprintf(fp, "%s\n", word2);
	fprintf(fp, "%s\n", word3);
	
	fclose(fp);
	
	return 0;
}
