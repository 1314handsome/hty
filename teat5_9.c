#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <errno.h>
//��������

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

//��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��


//int main()
//{
//	int n=0,i=2;
//	printf("������һ��������:");
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


//��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
int main()
{
	int n=0;
	char grat;
	printf("������ɼ�:");
	scanf("%d",&n);
	grat=(n>=90)?'A':((n>=60&&n<90)?'B':'C');
	printf("%c",grat);
	return 0;
}