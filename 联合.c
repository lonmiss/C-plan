/*
		联合 
	union anelt
	{
		int i;
		char c;
	} elt1,elt2;
	
	elt1.i=4;
	elt2.c='a';
	elt2.i=oxdeadbbef;
*/
//经常用union的场合
#include<stdio.h>
typedef union
{
	int i;
	char ch[sizeof(int)];
} chi;

int main(int argc,char const *argv)
{
	chi chi;
	int i;
	chi.i=1234;
	int *p;
	int sum;
	for (i=0;i<sizeof(int);i++)
	{
		printf("%02hhX\n",chi.ch[i]);
	}
	printf("%d\n",chi.i);
	printf("\n");
	
	return 0;
}

















