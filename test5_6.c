#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <math.h>

//��̬�ڴ����
//int main()
//{
//	int* p=(int *)malloc(10*sizeof(int));
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i=0;
//		for(i=0;i<10;i++)
//		{
//			*(p+i)=i;
//		}
//		for(i=0;i<10;i++)
//		{
//			printf("%d",*(p+i));
//		}
//	}
//	free(p);
//	p=NULL;
//	return 0;
//}



//��Ŀ����ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц����

//����������� ASCII 1 �����Ц������i�����У�j�������У�j����i�ı仯����������ڷ���ĸ�����



//int main()
//{
//	int i=0,j=0;
//	for(i=0;i<5;i++)
//	{
//		 for(j=0;j<=i;j++)
//		 {
//			 printf("��");
//		 }
//		 printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
// 
//int main()
//{
//    int i,j;
//    printf("\1\1\n"); /*�������Ц��*/
//    for(i=1;i<11;i++)
//    {
//        for(j=1;j<=i;j++)
//            printf("%c%c",219,219);
//        printf("\n");
//    }
//    return 0;
//}




//��Ŀ���ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�

//������������ӵĹ���Ϊ����1,1,2,3,5,8,13,21....�����¸�������������֮�ͣ��ӵ������¿�ʼ����

//int find(int n)
//{
//	if(n<=2)
//	{
//		return 1;
//	}
//	if(n>2)
//	{
//		return find(n-1)+find(n-2);
//	}
//}
//
//
//int main()
//{
//	int i=0,n=40,sum=0;
//	sum=find(n);
//	printf("%d\n",sum);
//	return 0;
//}




//�ж� 101 �� 200 ֮���������

//����������ж������ķ�������һ�����ֱ�ȥ�� 2 �� sqrt(�����)������ܱ����������������������������֮��������

//int main()
//{
//	int i=0,n=200;
//	for(i=101;i<200;i++)
//	{
//		int j=2;
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j>=i)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//��Ŀ����ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� �������磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���



#include<stdio.h>
 
int main()
{
    int i,x,y,z;
    for(i=100;i<1000;i++)
    {
        x=i%10;
        y=i/10%10;
        z=i/100%10;
        
        if(i==(x*x*x+y*y*y+z*z*z))
        printf("%d\n",i);
        
    }
    return 0;
}