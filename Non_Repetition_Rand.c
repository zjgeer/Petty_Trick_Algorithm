#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXSIZE 10

typedef struct
{
	int r[MAXSIZE];
	int length;
}sqList;

/* 方法一 */
/* 构造辅助数组，判断是否重复 */
void NonRepRand_1(void)
{
	int i,cnt;
	int n;
	int a[20];
	sqList myList;
	srand((unsigned)time(NULL));
	
	for(i = 0;i < 20;i++)
	{
		a[i] = 200;				/* 辅助数组标志 */
	}
	cnt = 0;
	while(cnt < MAXSIZE)
	{
		n = rand() % 20;
	
		if(a[n] == 200)
		{
			a[n] = 0;			/* 辅助数组标志清除 */
			myList.r[cnt] = n;	/* 存储 */
			printf("myList.r[%d] = %d \n",cnt,n);
			cnt++;
		}
	}
}

/* 方法二,需要比较，耗费时间较长 */
void NonRepRand_2(void)
{
	int i = 0;
	int j;
	int n;
	int flag = 0;

	sqList myList;
	
	srand((unsigned)time(NULL));
	
	for(j = 0;j < MAXSIZE;j++)
	{
		myList.r[j] = 0;
	}

	while(i < MAXSIZE)
	{
		n = rand() % 20 + 1;
		for(j = 0;j < i;j++)
		{
			if(myList.r[j] == n)	/* 有重复重新开始随机产生 */ 
			{
				flag = 0;
				break;
			}
			else
			{
				flag ++;
			}
		}			
		if(flag == i)
		{
			flag = 0;
			myList.r[i] = n;
			printf("myList.r[%d] = %d \n",i,n);
			i++;
		}
	}
}


int main(int argc,char *argv[])
{
	NonRepRand_2();
	
	return 0;
}

