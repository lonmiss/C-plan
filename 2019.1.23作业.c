#include<stdio.h>
int main()
{
	//int k;
	double a,k,s;
	printf("������aΪ��");
	scanf("%lf",&a);
	printf("������kΪ��");
	scanf("%lf",&k);
	s= 1/((1-a)+a/k);
	printf("%.2lf",s);
	return 0;
} 
