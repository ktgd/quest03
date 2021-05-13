/*
**
** QWASAR.IO -- reverse_string
**
** @param {char*} param_1
**
** @return {char*}
**
*/

char* reverse_string(char* param_1)
{

}

/*
Example of main
*/
int main() {
  char *my_str = strdup("Hello");
  
  printf("Before reverse -> %s\n", my_str);
  printf("Reverse -> %s\n", reverse_string(my_str));
  return 0;
}
