#include<stdio.h>
#include<string.h> 
int main(int argc,char const *argv[])
{
	/*strlen 
	size_t strlen(const char*s)
	����s���ַ����ĳ��ȣ���������β0��*/ 
	char line[]="hello";
	printf("strlen=%d\n",strlen(line));
	printf("sizeof=%d\n",sizeof(line));
	//~strlen=5
    //~sizeof=6
    
    /*strcmp
    int strcmp(const char *s1,const charb*s2);
    �Ƚ������ַ���������
	0��s1==s2;
	1:s1>s2;
	-1:s1<s2;*/
	char s1[]="abc";
	char s2[]="ABC";
	printf("%d\n",strcmp(s1,s2));
	
	/*strcpy
	char * strcpy(char *restrict dst,const char *restrict src);
	��src���ַ���������dst��~�൱�Ѻ�����ַ���������ǰ����ȥ
	restrict����src��dst������ӣ�C99��
	����dst �ú���Ϊ���������������*/
	
	/*strcat
	char *strcat(char *restrict s1,canst cahr *restrict s2);
	��s2������s1ǰ��ȥ�����һ�������ַ���
	����s1
	s1����߱��㹻�Ŀռ�*/
	//strcpy��strcat�����ܳ��ְ�ȫ���⣬���Ŀ�ĵ�û���㹻�Ŀռ�
	//��ȫ�İ汾
/*	 char * strncpy(char *restrict dst,const char *restrict src n);
	 char *strncat(char *restrict s1,canst cahr *restrict s2 n);
	 ȷ������n������������������~
	 int strncmp(const char *s1,const char *s2,size_t n);�Ƚ�ǰn��*/
	 
	 //���ַ��������ַ�
	 /*
	 char *strchr��const char *s��int c��;�����濪ʼ�� 
	 char *strrchr(const char *s,int c); �����濪ʼ�� 
	 ���ص���ָ��*/ 
	return 0;
} 

























