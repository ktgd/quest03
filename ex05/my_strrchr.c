/*
**
** QWASAR.IO -- my_strrchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/

#include <stddef.h>
#include <string.h>
//#include <stdio.h>

char* my_strrchr(char* param_1, char param_2)
{
	char* s = param_1;
	char c = param_2;
	//char* c_n; //char *c_n = c?0:s; // evaluates to 0, if c is true, or else evals to s, if c is false.
	char l = strlen(s);
	int i = l;

/*	while ( s[i] != 0 )
	{
		if ( s[i] == c )
		{
			c_n = &s[i];
		}
		else if ( s[i] == 0 )
		{
			return NULL;
		}
		i++;
	}
	return c_n;*/
	while ( s[i] != c )
	{
		--i;
		if ( s[i] == 0 )
		{
			return NULL;
		}
	}
	return (char*) &s[i]; 
}

/*int main()
{
	char* s_1 = "My name is Karl.";
	char c_1 = 'K';
	char* s_2 = "My name is Karl.";
	char c_2 = 'a';
	char* s_3 = "My name is Karl.";
	char c_3 = 'z';

	printf("%s\n", my_strrchr(s_1, c_1));
	printf("%s\n", my_strrchr(s_2, c_2));
	printf("%s\n", my_strrchr(s_3, c_3));
}*/
