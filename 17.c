#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	char *ch;
	char string []="Happy New Year";
	int line =strlen(string);
	ch =(char*)malloc(sizeof(char)*(line+1));
	ch=string;
	puts(ch);
	system("pause");
return 0;	
}
