#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{   
    char c, d;
    int i, h;
    
    printf("enter a character:");
    scanf("%c", &c);
    
    d=c+1;
    i=c;
    h=d;
    
    printf("the next character of %c (%i) is %c (%i)\n", c, i, d, h);
    
	return 0;
}
