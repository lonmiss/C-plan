/*全局变量
没有做初始化的全局变量会得到0值
	指针会得到NULL值
只能用编译时刻已知的值来初始化全局变量
它们的初始化发生在main函数之前
*/
/*方一：
	int gall=12;
	int g2=gall;	不可以
方二：
	const gall=12;
	int g2=gall;     可以
方三：
	int g2=gall;
	const gall= 12;   不可以 
*/
/*
#include<stdio.h>
int f(void);
int gall =12;

int main(int argc,char const *argv[])
{
	printf("in  gall=%d\n",gall);
	f();
	printf("agn  gall=%d\n",gall);
	return 0;
}

int f(void)
{
	printf("in  gall=%d\n",gall);
	gall +=2;
	printf("agn  gall=%d\n",gall);
	return gall;
}

in  gall=12
in  gall=12
agn  gall=14
agn  gall=14
*/

//被隐藏的全局变量
//如果函数内部存在与全局变量同名的变量，则全局变量被隐藏 
//在更小的地方，可以命名与大局变量同名的变量，大局变量被隐藏 

/*	静态本地变量
静态本地变量实际上是特殊的全局变量
它们位于相同的内存区域
静态本地变量具有全局的生存期，函数内的局部作用域
*/

/*	*返回指针的函数
返回本地变量的地址是危险的
返回全局变量或静态本地变量的地址是安全的
返回在函数内malloc的内存是安全的，但是容易造成问题
最好的做法是传入的指针 */

//返回本地变量的地址是危险的
#include<stdio.h> 





































