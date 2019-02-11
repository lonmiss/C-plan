/*		可变数组(实现数组更加智能化)
	resizable arry
	growable
	get the current size
	access to the elements
*/
/*		the interface
Array array_create(int init_size);创建一个数组 
void array_free(Array *a);回收空间 
int array_size(const Array *a);告诉我们这个数组有多少的单元可以用 
int* array_at(Array *a,int index);访问某个单元 
void array_inflate(Array *a,int more_size);	让这个数组长大 
*/
#ifndef _ARRAY_H_
#dfine _ARRAY_H_

typedef struct
{
	int *array;
	int size;
} Array;
Array array_create(int init_size);
void array_free(Array *a); 
int array_size(const Array *a); 
int* array_at(Array *a,int index);
void array_inflate(Array *a,int more_size);	 




































































