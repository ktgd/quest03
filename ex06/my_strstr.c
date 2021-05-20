/*
**
** QWASAR.IO -- my_strstr
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

#include <string.h>
#include <stddef.h>
//#include <stdio.h>

char* my_strstr(char* param_1, char* param_2)
{
	char* s_1 = param_1;
	char* s_2 = param_2;
	int s_1_n = strlen(s_1);
	int s_2_n = strlen(s_2);
//	int i = 0;
//	int j = 0;

	if ( !s_2_n )
	{
		return (char*) s_1;
	}
	while ( s_1_n >= s_2_n )
	{
		s_1_n--;
		if ( !memcmp(s_1, s_2, s_2_n) )
		{
			return (char*) s_1;
		}
		s_1++;
	}
	return NULL;
}

/*int main()
{
	char* s_1_1 = "My name is Karl.";
	char* s_1_2 = "K";
	char* s_2_1 = "My name is Karl.";
	char* s_2_2 = "Karl";
	char* s_3_1 = "My name is Karl.";
	char* s_3_2 = "a";
	char* s_4_1 = "My name is Karl.";
	char* s_4_2 = "ame";
	char* s_5_1 = "My name is Karl.";
	char* s_5_2 = "Z";
	char* s_6_1 = "My name is Karl.";
	char* s_6_2 = "Zorro";

	printf("%s\n", my_strstr(s_1_1, s_1_2));
	printf("%s\n", my_strstr(s_2_1, s_2_2));
	printf("%s\n", my_strstr(s_3_1, s_3_2));
	printf("%s\n", my_strstr(s_4_1, s_4_2));
	printf("%s\n", my_strstr(s_5_1, s_5_2));
	printf("%s\n", my_strstr(s_6_1, s_6_2));
}*/
