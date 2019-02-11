//结构数组 
/*
struct date dates[100];
struct date dates[]=
{
	{4,5,2005},{2,4,2005};
}; 
*/
#include<stdio.h>

struct time
{
	int hour;
	int minuters;
	int seconds;
};
struct time timeupdate(struct time now);

int main(viod)
{
	struct time texttimes[5]=
	{
		{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27}
	};
	int i;
	for(i=0;i<5;i++)
	{
		printf("Time is %.2i:%.2i:%.2i\n",
			texttimes[i].hour,texttimes[i].minuters,texttimes[i].seconds);
	}
	
	return 0;
}


























