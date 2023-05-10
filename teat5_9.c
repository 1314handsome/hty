#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <errno.h>
//柔性数组

//struct S
//{
//	int n;
//	int arr[];
//};
//int main()
//{
//	int i=0;
//	struct S* p=(struct S*)malloc(sizeof(struct S )+5*sizeof(int));
//	struct S* ptr=NULL;
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		for(i=0;i<5;i++)
//		{
//			p->arr[i]=i;
//		}
//	}
//	 ptr=(struct S*)realloc(p,44);
//	if(ptr!=NULL)
//	{
//		p=ptr;
//	}
//	for(i=5;i<10;i++)
//	{
//		p->arr[i]=i;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",p->arr[i]);
//	}
//	free(p);
//	p=NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	int i=0;
//	int* ptr=NULL;
//	struct S* p=(struct S*)malloc(sizeof(struct S));
//	p->arr=(int *)malloc(20);
//	for(i=0;i<5;i++)
//	{
//		p->arr[i]=i;
//	}
//	ptr=(int*)realloc(p->arr,40);
//	if(ptr!=NULL)
//	{
//		p->arr=ptr;
//	}
//	for(i=5;i<10;i++)
//	{
//		p->arr[i]=i;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",p->arr[i]);
//	}
//	free(p->arr);
//	p->arr=NULL;
//	free(p);
//	p=NULL;
//	return 0;
//} 

//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。


//int main()
//{
//	int n=0,i=2;
//	printf("请输入一个正整数:");
//	scanf("%d",&n);
//	for(i=2;i<=n;i++)
//	{
//		while(n%i==0)
//		{
//			printf("%d",i);
//			n=n/i;
//			if(n!=1)
//				printf("*");
//		}
//	}
//	return 0;
//}


//题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
int main()
{
	int n=0;
	char grat;
	printf("请输入成绩:");
	scanf("%d",&n);
	grat=(n>=90)?'A':((n>=60&&n<90)?'B':'C');
	printf("%c",grat);
	return 0;
}