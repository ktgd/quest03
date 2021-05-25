/*
**
** QWASAR.IO -- my_strcmp
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {int}
**
*/

//#include <stdio.h>

int my_strcmp(char* param_1, char* param_2)
{
	char* s_1 = param_1;
	char* s_2 = param_2;
	int i = 0;

	while ( s_1[i] == s_2[i] && s_1[i] != 0 && s_2[i] != 0 ) // Couldn't I also just increment the position of a pointer? It would spare me from needing an index number.
	{
		i++;
	}
	return ( s_1[i] - s_2[i] );
}

/*
Example of main
*/
/*int main() {
  char *s1 = "Hello";
  char *s2 = "Hello";
  
  printf("my_strcmp -> %d\n", my_strcmp(s1, s2));
  return 0;
}*/
