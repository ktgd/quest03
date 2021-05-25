/*
**
** QWASAR.IO -- my_is_sort
**
** @param {integer_array*} param_1
**
** @return {bool}
**
*/

#include <stdbool.h>
#include <stddef.h>
/*#include <stdlib.h>
#include <stdio.h>*/

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
	int size;
	int* array;
} integer_array;
#endif

//bool my_is_sort(integer_array* param_1)
//{
//	//integer_array* A = param_1;
//	//bool truth = false; //int t = 0; //char* boolean = "false"; //int b = 0;
//	char* order = NULL;
//	char* monotonicity = NULL; //= order; 
//	int i = 0;
//
//	/*while A  \/ for i = 1, n = l( A ), i < n, i++
//		if A_i <= A_i+1, b = 1, order = ASC
//		else if A_i >= A_i+1, b = 1, order = DESC
//		if order != monotonicity, b = 0, i = n
//		monotonicity = order
//		i + 1*/
//	/*while ( A->array[i] != 0 && A->array[ i + 1 ] != 0 )
//	{
//		if ( A->array[0] <= A->array[ 0 + 1 ] )
//		{
//			while ( A->array[i] <= A->array[ i + 1 ] )
//			{
//				if ( A->array[i] == 0 )
//				{
//					b = 1;
//				}
//				i++;
//			}
//		}
//		else if ( A->array[0] >= A->array[ 0 + 1 ] )
//		{
//			while ( A->array[i] >= A->array[ i + 1 ] )
//			{
//				if ( A->array[i] == 0 )
//				{
//					b = 1;
//				}
//				i++;
//			}
//		}
//		//else
//		//{
//		//	b = 0;
//		//}
//	}
//	if ( b == 1 )
//	{
//		boolean = true;
//	}
//	else if ( b == 0 )
//	{
//		boolean = false;
//	}*/ // Within a minute, I drafted this; within a second, I started over. I mean, man, that's fucking shit. :D Au moins, mes conneries me font marrer.
//	if ( param_1->array[ i ] < param_1->array[ i + 1 ] )
//	{
//		order = " ASC";
//	}
//	else if ( param_1->array[ i ] > param_1->array[ i + 1 ] )
//	{
//		order = "DESC";
//	}
//	monotonicity = order;
//	while ( param_1->array[ i + 1 ] != 0 )
//	{
//		if ( order == monotonicity && param_1->array[ i ] <= param_1->array[ i + 1 ] )
//		{
//			//truth = true; //t = 1;
//			order = " ASC";
//		}
//		else if ( order == monotonicity && param_1->array[ i ] >= param_1->array[ i + 1 ] )
//		{
//			//truth = true; //t = 1;
//			order = "DESC";
//		}
//		if ( monotonicity != NULL && order != NULL && order != monotonicity )
//		{
//			return false;
//			/*truth = false;
//			//return truth;*/
//		}
//		monotonicity = order;
//		i++;
//	}
//	return true;
//	/*//truth = true;
//	return truth; //return t;*/
//} // starting over again.

bool my_is_sort_asc( integer_array* param_1 )
{
	int l = param_1->size; //= sizeof(param_1->array);
	int i = 0;
	//printf("l: %d\ni: %d\n", l, i);

	while ( param_1->array[ i + 1 ] != 0 && param_1->array[ i ] <= param_1->array[ i + 1 ] )
		i++;
	//{
	//	printf("\ni_%d: %d\nA_%d: %d\nA_%d+1: %d\n", i, i, i, param_1->array[i], i, param_1->array[i+1]);
	//	i++;
	//}
	//printf("\ni_%d: %d\nA_%d: %d\nA_%d+1: %d\n", i, i, i, param_1->array[i], i, param_1->array[i+1]);
	if ( i == l - 1 ) //== param_1->size - 1 )
		return true;
	else
		return false;
}

bool my_is_sort_desc( integer_array* param_1 )
{
	int l = param_1->size;
	int i = 0;

	while ( param_1->array[ i + 1 ] != 0 && param_1->array[ i ] >= param_1->array[ i + 1 ] )
		i++;
	if ( i == l - 1 )
		return true;
	else
		return false;
}

bool my_is_sort(integer_array* param_1)
{
	if ( param_1->size <= 1 || my_is_sort_asc( param_1 ) || my_is_sort_desc( param_1 ) ) //	if ( my_is_sort_asc( param_1 ) || my_is_sort_desc( param_1 ) )
		return true;
	else
		return false;
}

/*int main()
{
	struct s_integer_array* A_0;
	A_0 = (struct s_integer_array*) malloc(sizeof(struct s_integer_array));
	A_0->size = 3; //sizeof(A->array);
	A_0->array = (int*) malloc(sizeof(int));
	A_0->array[3];
		A_0->array[0] = 1;
		A_0->array[1] = 1;
		A_0->array[2] = 2;
	struct s_integer_array* A_1;
	A_1 = (struct s_integer_array*) malloc(sizeof(struct s_integer_array));
	A_1->size = 3;
	A_1->array = (int*) malloc(sizeof(int));
	A_1->array[3];
		A_1->array[0] = 2;
		A_1->array[1] = 1;
		A_1->array[2] = -1;
	struct s_integer_array* A_2;
	A_2 = (struct s_integer_array*) malloc(sizeof(struct s_integer_array));
	A_2->size = 4;
	A_2->array = (int*) malloc(sizeof(int));
	A_2->array[4];
		A_2->array[0] = 4;
		A_2->array[1] = 7;
		A_2->array[2] = 0;
		A_2->array[3] = 3;

	printf("%s\n", my_is_sort(A_0) ? "true" : "false"); //printf("%d\n", my_is_sort(A_0)); //printf("%s\n", my_is_sort(A_0));
	printf("%s\n", my_is_sort(A_1) ? "true" : "false");
	printf("%s\n", my_is_sort(A_2) ? "true" : "false");
	return 0;
}*/
