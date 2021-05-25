/*
**
** QWASAR.IO -- reverse_string
**
** @param {char*} param_1
**
** @return {char*}
**
*/

#include <string.h>
/*#include <stdio.h>*/

char* reverse_string(char* param_1)
{
	char* s = param_1;
	char c;
	int l = strlen((char*) s);
	int i = 0;
	int j = l - 1;

	while ( i < j )
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
	return s;
}

/*
Example of main
*/
/*int main() {
  char *my_str = strdup("Hello");
  
  printf("Before reverse -> %s\n", my_str);
  printf("Reverse -> %s\n", reverse_string(my_str));
  return 0;
}*/
