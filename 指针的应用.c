#include<stdio.h>
int main()
{
	/*
	ָ����const
	��ʾһ���õ�ĳ�������ĵ�ַ��������ָ����������
	int *const q=&i;//q�� const
	q++; //error
	
	��ָ��const
	��ʾ����ͨ�����ָ��ȡ�޸��Ǹ�������������ʹ���Ǹ�������Ϊconst��
	const int*p=&i;
	*p=26;//error!(*p)��const
	 i= 26��//OK
	 p=&j;//Ok 
	 
	 �ж�
	 int i;
	 const int* p1 =&i;
	 int  const*p2 =&i;
	 int *const p3 =&i;
	 #�ж��Ǹ���const�˵ı�־��const��*��ǰ�棨��ʾ��ָ�Ķ��������޸ģ����Ǻ��棨��ʾָ�벻�ɱ��޸ģ� 
	
	ת��
	���ǿ��Բ�һ����const��ֵת����const�� 
	void f(const int* x);
	int a=15;
	f(&a);//OK
	const int b=a;
	
	f(&b);//ok
	b=a+1;//error
	
	
	const����
	const int a[]={1,2,3,4,5,6};
	��������Ѿ���const��ָ���ˣ������const���������ÿ����Ԫ����const int
	���Ա���ͨ����ʼֵ���и�ֵ
	
	��������ֵ
	��Ϊ�����鴫�뺯��ʱ �ǵ�ַ�������Ǹ������ڲ������޸������ֵ
	Ϊ�˱������鲻�������ƻ����������ò���Ϊconst
	 int sum��const int a[],int leength�� 
	*/ 
	int a[]={5,15,34,54,14,2,52,72};
	int *p=&a[5];
	int t,i;
	t=sizeof(p)/sizeof(p[0]);
	for(i=0;i<=t;i++)
	{
		printf("%d\n",p[i]);
	}
	//printf("%d",p[-2]);
	i=-5;
	while(i<0)
	{
		printf("%d\n",p[i]);
		i++;
	}
	
	return 0;
}



