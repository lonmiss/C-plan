#include<stdio.h>
int main()
{
	/*
	指针是const
	表示一旦得到某个变量的地址，不能在指向其他变量
	int *const q=&i;//q是 const
	q++; //error
	
	所指是const
	表示不能通过这个指针取修改那个变量（并不能使得那个变量成为const）
	const int*p=&i;
	*p=26;//error!(*p)是const
	 i= 26；//OK
	 p=&j;//Ok 
	 
	 判断
	 int i;
	 const int* p1 =&i;
	 int  const*p2 =&i;
	 int *const p3 =&i;
	 #判断那个被const了的标志是const在*的前面（表示所指的东西不能修改）还是后面（表示指针不可被修改） 
	
	转换
	总是可以不一个非const的值转换成const的 
	void f(const int* x);
	int a=15;
	f(&a);//OK
	const int b=a;
	
	f(&b);//ok
	b=a+1;//error
	
	
	const数组
	const int a[]={1,2,3,4,5,6};
	数组变量已经是const的指针了，这里的const表明数组的每个单元都是const int
	所以必须通过初始值进行赋值
	
	保护数组值
	因为把数组传入函数时 是地址，所以那个函数内部可以修改数组的值
	为了保护数组不被函数破坏，可以设置参数为const
	 int sum（const int a[],int leength） 
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



