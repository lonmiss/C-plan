#include<stdio.h>
int main()
{
	int one,two,five;
	int a,j=0;
	scanf("%d",&a);
	for(one=0;one<=a*10;one++)
	{
		for(two=0;two<=a*10/2;two++)
		{
			for(five=0;five<=a*10/5;five++)
			{
				if(one*1+ two*2+ five*5==a*10)
				{
					j++;
					printf("һ��%d�ţ�����%d�ţ����%d��.\n",one,two,five);
			    }
			}
		}
	}
	printf("һ����%d�ַ���\n",j);
	return 0;
} 
