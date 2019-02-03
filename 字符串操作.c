#include<stdio.h>
int main(int argc,char const *argv[])
{
	/*
	int putchar(int c);
	向标准输入读入一个字符
	返回类型是char视为了返回 EOF（-1）
	 Windows-->ctrl-z
	 unix-->ctrl-d
	 把一个数放在一个标准输出上*/ 
	 
	 /*int ch;
	 
	 while((ch=getchar())!=EOF)
	 {
	 	putchar(ch);
	 }
	 printf("EOF\n");*/
	 
	 /*getchar
	 int getchar(void);
	 从标准输入读入一个字符
	 返回类型是int是为了返回EOF（-1）
	 Windows-->Ctrl-Z
	 Unix-->CtrlD
	 */
	 
	/*int ch;
	 
	 while((ch=getchar())!=EOF)
	 {
	 	putchar(ch);
	 }
	 printf("EOF\n");*/
	 
	/*字符串数组 
	char **a
		a是一个指针，指向另一个字符（串）
	char a[][]*/
/*{	char a[][10]={  //a[0]-->char [10]
		"Hello",
	} ;
	
	//相对更好的
	//a[0]-->char *
	char *a1[]=
	{
		"hello",
		"world",
		"abcdefghigklmnopqrst",
	} ;
	 
	 printf("%s",a1[1]);
}*/	 
	/*
	程序参数
	int main(int argc,char const *argv[])
	argv[0]是命令本身
		当使用Unix的符号链接时，反应符号链接的名字
	*/	
	int i;
	for(i=0;i<argc;i++)
	{
		printf("%d:%s\n",i,argv[i]);		
	} //0:D:\C语言养成计划\C-plan\字符串操作.exe
	return 0; 
} 
















