#include<stdio.h>
int main(int argc,char const *argv[])
{
	/*
	int putchar(int c);
	���׼�������һ���ַ�
	����������char��Ϊ�˷��� EOF��-1��
	 Windows-->ctrl-z
	 unix-->ctrl-d
	 ��һ��������һ����׼�����*/ 
	 
	 /*int ch;
	 
	 while((ch=getchar())!=EOF)
	 {
	 	putchar(ch);
	 }
	 printf("EOF\n");*/
	 
	 /*getchar
	 int getchar(void);
	 �ӱ�׼�������һ���ַ�
	 ����������int��Ϊ�˷���EOF��-1��
	 Windows-->Ctrl-Z
	 Unix-->CtrlD
	 */
	 
	/*int ch;
	 
	 while((ch=getchar())!=EOF)
	 {
	 	putchar(ch);
	 }
	 printf("EOF\n");*/
	 
	/*�ַ������� 
	char **a
		a��һ��ָ�룬ָ����һ���ַ�������
	char a[][]*/
/*{	char a[][10]={  //a[0]-->char [10]
		"Hello",
	} ;
	
	//��Ը��õ�
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
	�������
	int main(int argc,char const *argv[])
	argv[0]�������
		��ʹ��Unix�ķ�������ʱ����Ӧ�������ӵ�����
	*/	
	int i;
	for(i=0;i<argc;i++)
	{
		printf("%d:%s\n",i,argv[i]);		
	} //0:D:\C�������ɼƻ�\C-plan\�ַ�������.exe
	return 0; 
} 
















