#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x<=0)
	{
		printf("%d",2*x);
	}else if(0<x&&x<=2)
	{
		printf("%d",x-2);
	}else if(x>2)
	{
		printf("%d",4*x+3);
	}
	return 0;
} 
