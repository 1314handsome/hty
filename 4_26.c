#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//1,2,3,4组成一个三位数，不重复
//int main()
//{
//	int i,j,k;
//	for(i=1;i<5;i++)
//	{
//		for(j=1;j<5;j++)
//		{
//			for(k=1;k<5;k++)
//			{
//				if(i!=j&&j!=k&&i!=k)
//				{
//					int tmp=i*100+j*10+k;
//					printf("%d\n",tmp);
//				}
//			}
//		}
//	}
//	return 0;
//}


//企业发放的奖金根据利润提成。
//
//利润(I)低于或等于10万元时，奖金可提10%；
//利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
//20万到40万之间时，高于20万元的部分，可提成5%；
//40万到60万之间时高于40万元的部分，可提成3%；
//60万到100万之间时，高于60万元的部分，可提成1.5%；
//高于100万元时，超过100万元的部分按1%提成。

//自己写的
//int main()
//{
//	double i=0.0;
//	double a=0.0;
//	printf("利润是多少万元\n");
//	scanf("%lf",&i);
//	while(i>0)
//	{
//		if(i<=10)
//		{
//			a+=i*0.1;
//			i-=10;
//		}
//		if(i>10&&i<=20)
//		{
//			a+=(i-10)*0.075;
//			i=i-(i-10);
//		}
//		if(i>20&&i<=40)
//		{
//			a+=(i-20)*0.05;
//			i=i-(i-20);
//		}
//		if(i>40&&i<60)
//		{
//			a+=(i-40)*0.03;
//			i=i-(i-40);
//		}
//		if(i>60&&i<=100)
//		{
//			a+=(i-60)*0.015;
//			i=i-(i-60);
//		}
//		if(i>=100)
//		{
//			a+=(i-100)*0.01;
//			i=i-(i-100);
//		}
//	}
//	printf("%lf\n",a);
//	return 0;
//}


//看了答案写的
//int main()
//{
//	double i=0;
//	double bonuse1,bonuse2,bonuse4,bonuse6,bonuse10,bonuse;
//	printf("净利润是:\n");
//	scanf("%lf",&i);
//	bonuse1=100000*0.1;
//	bonuse2=bonuse1+100000*0.075;
//	bonuse4=bonuse2+200000*0.05;
//	bonuse6=bonuse4+200000*0.03;
//	bonuse10=bonuse6+400000*0.015;
//	if(i<=100000)
//	{
//		bonuse=i*0.1;
//	}
//	else if(i<=200000)
//	{
//		bonuse=bonuse1+(i-100000)*0.075;
//	}
//	else if(i<=400000)
//	{
//		bonuse=bonuse2+(i-200000)*0.05;
//	}
//	else if(i<=600000)
//	{
//		bonuse=bonuse4+(i-400000)*0.03;
//	}
//	else if(i<=1000000)
//	{
//		bonuse=bonuse6+(i-600000)*0.015;
//	}
//	else if(i>1000000)
//	{
//		bonuse=bonuse10+(i-1000000)*0.01;
//	}
//	printf("奖金为:%lf\n",bonuse);
//}

//题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//
//程序分析：
//
//假设该数为 x。
//
//1、则：x + 100 = n2, x + 100 + 168 = m2
//
//2、计算等式：m2 - n2 = (m + n)(m - n) = 168
//
//3、设置： m + n = i，m - n = j，i * j =168，i 和 j 至少一个是偶数
//
//4、可得： m = (i + j) / 2， n = (i - j) / 2，i 和 j 要么都是偶数，要么都是奇数。
//
//5、从 3 和 4 推导可知道，i 与 j 均是大于等于 2 的偶数。
//
//6、由于 i * j = 168， j>=2，则 1 < i < 168 / 2 + 1。
//
//7、接下来将 i 的所有数字循环计算即可。




//请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序。

//int main()
//{
//	int ret = check_sys();
//	if(ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
////代码2
//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}


//int main()
//{
//	char a=-1;
//	signed char b=-1;
//	unsigned char c=-1;
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}

//int main()
//{
//	char a=-128;
//	printf("%u\n",a);
//	return 0;
//}


int main()
{
int n = 9;
float *pFloat = (float *)&n;
printf("n的值为：%d\n",n);
printf("*pFloat的值为：%f\n",*pFloat);
*pFloat = 9.0;
printf("num的值为：%d\n",n);
printf("*pFloat的值为：%f\n",*pFloat);
return 0;
}
