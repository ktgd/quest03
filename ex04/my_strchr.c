/*
**
** QWASAR.IO -- my_strchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/

#include <stddef.h>
//#include <stdio.h>

char* my_strchr(char* param_1, char param_2)
{
	char* s = param_1;
	char c = param_2;
	int i = 0;

	while ( s[i] != c )
	{
		if ( s[i] == 0 )
		{
			return NULL;
		}
		i++;
	}
	return (char*) &s[i];
}

/*int main()
{
	char* s = "Hi. My name is Karl.";
	char c = 'K';

	printf("%s\n", my_strchr(s, c));
}*/
