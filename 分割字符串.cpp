#include <string.h>
#include <stdio.h>

char string[] = "A string\tof ,,tokens\nand some  more tokens";
char seps[]   = " ,;\t\n";   // 各种分隔符号都可以
char *token;

void main_分割字符串( void )
{
	printf( "%s\n\nTokens:\n", string );
	/* Establish string and get the first token: */
	token = strtok( string, seps );
	while( token != NULL )
	{
		/* While there are tokens in "string" */
		printf( " %s\n", token );
		/* Get next token: */
		token = strtok( NULL, seps );
	}
}