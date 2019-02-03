#include<stdio.h>
int main()
{
	int month;
	printf("«Î ‰»Î‘¬∑›£∫");
	scanf("%d",&month);
	char *a[]=
	{
		"January","February","March","April","May",
		"June","July","August","September","October","November",
		"December",
	};
	printf("%s",a[month-1]);
	return 0;
	 
}
