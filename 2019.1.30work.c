#include<stdio.h>
int main()
{
	int a,grade;
	scanf("%d",&grade);
	if(grade==100)
	{
		printf("S");
	}else
	{
	grade /= 10;
	switch(grade)
	{
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		default:
			printf("F\n");
			break;
    }
	}
	return 0;
} 
