#include<stdio.h>
#include<string.h> 
int main(int argc,char const *argv[])
{
	/*strlen 
	size_t strlen(const char*s)
	返回s的字符串的长度（不包括结尾0）*/ 
	char line[]="hello";
	printf("strlen=%d\n",strlen(line));
	printf("sizeof=%d\n",sizeof(line));
	//~strlen=5
    //~sizeof=6
    
    /*strcmp
    int strcmp(const char *s1,const charb*s2);
    比较两个字符串，返回
	0：s1==s2;
	1:s1>s2;
	-1:s1<s2;*/
	char s1[]="abc";
	char s2[]="ABC";
	printf("%d\n",strcmp(s1,s2));
	
	/*strcpy
	char * strcpy(char *restrict dst,const char *restrict src);
	把src的字符串拷贝到dst中~相当把后面的字符串拷贝到前面中去
	restrict表明src和dst不会叠加（C99）
	返回dst 该函数为了能连接起代码来*/
	
	/*strcat
	char *strcat(char *restrict s1,canst cahr *restrict s2);
	把s2拷贝到s1前面去，结成一个长的字符串
	返回s1
	s1必须具备足够的空间*/
	//strcpy和strcat都可能出现安全问题，如果目的地没有足够的空间
	//安全的版本
/*	 char * strncpy(char *restrict dst,const char *restrict src n);
	 char *strncat(char *restrict s1,canst cahr *restrict s2 n);
	 确保输入n个，如果多出来就掐掉~
	 int strncmp(const char *s1,const char *s2,size_t n);比较前n个*/
	 
	 //在字符串中找字符
	 /*
	 char *strchr（const char *s，int c）;从左面开始找 
	 char *strrchr(const char *s,int c); 从右面开始找 
	 返回的是指针*/ 
	return 0;
} 

























