/*		�ɱ�����(ʵ������������ܻ�)
	resizable arry
	growable
	get the current size
	access to the elements
*/
/*		the interface
Array array_create(int init_size);����һ������ 
void array_free(Array *a);���տռ� 
int array_size(const Array *a);����������������ж��ٵĵ�Ԫ������ 
int* array_at(Array *a,int index);����ĳ����Ԫ 
void array_inflate(Array *a,int more_size);	��������鳤�� 
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




































































