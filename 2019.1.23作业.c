#include<stdio.h>
int main()
{
	//int k;
	double a,k,s;
	printf("请输入a为：");
	scanf("%lf",&a);
	printf("请输入k为：");
	scanf("%lf",&k);
	s= 1/((1-a)+a/k);
	printf("%.2lf",s);
	return 0;
} 
