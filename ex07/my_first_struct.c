/*
**
** QWASAR.IO -- my_first_struct
**
** @param {integer_array*} param_1
**
** @return {void}
**
*/

#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
	int size;
	int* array;
} integer_array;
#endif

void my_first_struct(integer_array* param_1)
{
//	//struct s_integer_array A;
//	//struct s_integer_array* A_p;
//	integer_array* A = param_1; //struct s_integer_array A = param_1;
//	integer_array* A_p = &A; //struct s_integer_array* A_p = &A;
//	A->size = sizeof(A_p->array); //A.size = sizeof(A_p);
//	A_p->array = param_1;
//	int n = A->size; //int n = A.size;
//	int i = 0; // starting over.
	int i = 0;

	if ( param_1->size == 0 )
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", param_1->size);
		while ( i < param_1->size )
		{
			printf("%d\n", param_1->array[i]);
			i++;
		}
	}
}

/*int main()
{
//  integer_array A;
//  integer_array* A_p = &A;
//  A.size = sizeof(A_p);
//  A_p->array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // starting over.
  struct s_integer_array* intarr; // pcq la ptn de fn expects un pointer Einstein //struct s_integer_array intarr;
  intarr = (struct s_integer_array*) malloc(sizeof(struct s_integer_array));
  intarr->size = 1; //sizeof(intarr->array); // psq du coup, c'est un pointer //intarr.size = sizeof(ptr_on_intarr);
  intarr->array = (int*) malloc(sizeof(int));
  intarr->array[1];
    intarr->array[0] = 0;
  //intarr->array[1] = { 0 }; // 'my_first_struct.c:60:22: error: expected expression before ‘{’ token\n 60 |   intarr->array[1] = { 0 };\n    |                      ^'...? What?
  struct s_integer_array* intarr2;
  intarr2 = (struct s_integer_array*) malloc(sizeof(struct s_integer_array));
  intarr2->size = 3; //sizeof(intarr2->array);
  intarr2->array = (int*) malloc(sizeof(int));
  intarr2->array[3];
    intarr2->array[0] = 1;
    intarr2->array[1] = 2;
    intarr2->array[2] = 3;
  struct s_integer_array* intarr3;
  intarr3 = (struct s_integer_array*) malloc(sizeof(struct s_integer_array));
  intarr3->size = 6; //sizeof(intarr3->array);
  intarr3->array = (int*) malloc(sizeof(int));
  intarr3->array[6];
    intarr3->array[0] = 10;
    intarr3->array[1] = 2;
    intarr3->array[2] = 3;
    intarr3->array[3] = 3;
    intarr3->array[4] = 0;
    intarr3->array[5] = -1;

  my_first_struct(intarr);
  my_first_struct(intarr2);
  my_first_struct(intarr3);
  return 0;
}*/
