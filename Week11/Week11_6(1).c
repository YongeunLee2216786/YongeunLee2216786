#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	FILE*file;
	char c;
	char str[100];
	
	file=fopen("sample.txt", "r");
	if(file==NULL) {
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}
	
	while((c=fgetc(file))!=EOF) {
		putchar(c);
	}
	
/*	while(fscanf(file, "%s", str)!=EOF) {
		printf("%s\n", str);
	}*/
	
	fclose(file);
	return 0;
}
