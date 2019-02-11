/*			#define
	#define<名字><值>
	注意没有结尾的分号，因为不是C的语句
	名字必须是一个单词，值可以是各种东西
	在C语言的编译器开始之前，编译预处理程序
	（cpp）会把程序中的名字换成值
		完全的文本替换 

			宏
	如果一个宏的值中有其他的宏的名字，也会被替换的
	如果一个宏的值超过一行，最后一行之前的行末需要加\
	红的值后面出现的注释不会被当做宏的值的一部分 
*/
/*
		没有值得宏
	#define_DEBUG
	这类宏是用于条件编译的，后面有其他的编译预处理
	指令来检查这类宏是否已经被定义过了 

		预定义的宏
	_LINE_   源代码件的行号 
	_FILE_	 源代码的文件名	
	_DATE_   源代码编译时的日期 
	_TIME_   源代码编译时的时间 
	_STDC_
*/
/*
#include<stdio.h>

int main(int argc,char const *argv[])
{
//	printf("%s:%d\n",_FILE_,_LINE_);
	printf("%s,%s\n",_DATE_,_TIME_);
	return 0;
}      //不知道怎么回事，我的DVC++通不过去 
*/
/*
#include<stdio.h>

#define pi 3.14159
#define format "%f\n"
#define pi2 2*pi   //pi *2 编通过译能 

int main(int argc,char const *argv[])
{
	printf(format,pi2*3.0);//18.849540
	return 0;
} */
		像函数的宏
#define cube(x)((x)*(x)*(x))
宏可以带参数 
















































































