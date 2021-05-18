/*
**
** QWASAR.IO -- my_strcpy
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

char* my_strcpy(char* param_1, char* param_2) //char* strcpy(char* dst, const char* src)
{
	char* s_1 = param_1;
	char* s_2 = param_2;
	char* s_0 = s_1;
	int i = 0;

	while ( s_2[i] != 0 ) //while ( param_1[i] == param_2[i] && param_1[1] != 0 && param_2[i] != 0 )
	{
		s_0[i] = s_2[i];
		i++;
	}
	return s_0;
}

/*
Example of main
*/
/*#include <stdio.h>

int main() {
  char dst[100] = {0};
  char *src     = "Hello";
  
  printf("my_strcpy -> %s\n", my_strcpy(dst, src));
  return 0;
}*/
