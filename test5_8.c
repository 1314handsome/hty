#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	int i=0;
//	int *p=NULL;
//	p=(int*)malloc(20);
//	if(p==NULL)
//	{
//		printf("%s",strerror(errno));
//	}
//	else
//	{
//		for(i=0;i<5;i++)
//		{
//			*(p+i)=i;
//		}
//	}
//	int* p2=(int*)realloc(p,40);
//	if(p2!=NULL)
//	{
//		p=p2;
//	}
//	for(i=5;i<10;i++)
//	{
//		*(p+i)=i;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d",*(p+i));
//	}
//	return 0;
//}


int main()
{
	int* p = NULL;
	int i=0;
int *ptr = (int*)malloc(100);
if(ptr==NULL)
	{
		printf("%s",strerror(errno));
	}
	else
	{
		for(i=0;i<5;i++)
		{
			*(ptr+i)=i;
		}
	}
//扩展容量
//代码1
//ptr = (int*)realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)
//代码2

p = (int *)realloc(ptr, 1000);
if(p != NULL)
{
ptr = p;
}
 for(i=5;i<10;i++)
		{
			*(ptr+i)=i;
		}
 for(i=0;i<10;i++)
		{
			printf("%d",*(ptr+i));
		}
//业务处理
free(ptr);
ptr=NULL;
return 0;
}