#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXSIZE 10

typedef struct
{
	int r[MAXSIZE];
	int length;
}sqList;

/* ����һ */
/* ���츨�����飬�ж��Ƿ��ظ� */
int main(int argc,char *argv[])
{
	int i,cnt;
	int n;
	int a[20];
	sqList myList;
	srand((unsigned)time(NULL));
	
	for(i = 0;i < 20;i++)
	{
		a[i] = 200;				/* ���������־ */
	}
	cnt = 0;
	while(cnt < MAXSIZE)
	{
		n = rand() % 20;
	
		if(a[n] == 200)
		{
			a[n] = 0;			/* ���������־��� */
			myList.r[cnt] = n;	/* �洢 */
			printf("myList.r[%d] = %d \n",cnt,n);
			cnt++;
		}
	}
	return 0;
}