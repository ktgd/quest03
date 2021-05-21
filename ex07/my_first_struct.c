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
#include <string.h>

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
    /*//struct s_integer_array A;
    //struct s_integer_array* A_p;
    integer_array* A = param_1; //struct s_integer_array A = param_1;
    integer_array* A_p = &A; //struct s_integer_array* A_p = &A;
    A->size = sizeof(A_p->array); //A.size = sizeof(A_p);
    A_p->array = param_1;
    int n = A->size; //int n = A.size;
    int i = 0;*/ // Let's start over.
    param_1->size = sizeof(param_1->array);
    //param_1->array = param_1;
    int i = 0;

    if ( param_1->size == 0 )
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", param_1->size); // here print the size of the array
        while ( i < param_1->size )
        {
            printf("%d\n", param_1->array[i]);
            i++;
        } // here print all elements of the array
    } // size\narray[0]\narray[1]...
}

int main()
{
/*  integer_array A;
  integer_array* A_p = &A;
  A.size = sizeof(A_p);
  A_p->array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };*/ // Let's start over.
  struct s_integer_array* intarr; // pcq la ptn de fn expects un pointer Einstein //struct s_integer_array intarr;
  intarr->size = sizeof(intarr->array); // psq du coup, c'est un pointer //intarr.size = sizeof(ptr_on_intarr);
  intarr->array[1];
    intarr->array[0] = 0;
  //intarr->array[1] = { 0 }; // 'my_first_struct.c:60:22: error: expected expression before ‘{’ token\n 60 |   intarr->array[1] = { 0 };\n    |                      ^'...? What?

  my_first_struct(intarr);
  return 0;
}
