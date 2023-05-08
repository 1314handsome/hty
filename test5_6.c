#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <math.h>

//动态内存分配
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



//题目：打印楼梯，同时在楼梯上方打印两个笑脸。

//程序分析：用 ASCII 1 来输出笑脸；用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数。



//int main()
//{
//	int i=0,j=0;
//	for(i=0;i<5;i++)
//	{
//		 for(j=0;j<=i;j++)
//		 {
//			 printf("黑");
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
//    printf("\1\1\n"); /*输出两个笑脸*/
//    for(i=1;i<11;i++)
//    {
//        for(j=1;j<=i;j++)
//            printf("%c%c",219,219);
//        printf("\n");
//    }
//    return 0;
//}




//题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）

//程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。

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




//判断 101 到 200 之间的素数。

//程序分析：判断素数的方法：用一个数分别去除 2 到 sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数。

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

//题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。



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