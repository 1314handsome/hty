#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int year=0,mouth=0,day=0,sum=0;
//	printf("请输入年月日:>");
//	scanf("%d,%d,%d",&year,&mouth,&day);
//		switch(mouth)
//		{
//		case 1:sum=0;
//			break;
//		case 2:sum=31;
//			break;
//		case 3:sum=59;
//			break;
//		case 4:sum=90;
//			break;
//		case 5:sum=120;
//			break;
//		case 6:sum=151;
//			break;
//		case 7:sum=181;
//			break;
//		case 8:sum=213;
//			break;
//		case 9:sum=243;
//			break;
//		case 10:sum=273;
//			break;
//		case 11:sum=304;
//			break;
//		case 12:sum=334;
//			break;
//		default:printf("输入错误\n");
//			break;
//		}
//		sum=sum+day;
//		if(year%400==0||(year%4==0&&year%100!=0)&&mouth>=3)
//		{
//			sum++;
//		}
//		else
//		{
//			;
//		}
//	printf("是这一年的第 %d 天",sum);
//	printf("\n");
//	return 0;
//}



//题目：输入三个整数x,y,z，请把这三个数由小到大输出。

//程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。

int main()
{
	int x=0,y=0,z=0,t=0;
	printf("请输入三个数:>");
	scanf("%d,%d,%d",&x,&y,&z);
	if(x>y)
	{
	    t=x;
		x=y;
		y=t;
	}
	if(x>z)
	{
		t=x;
		x=z;
		z=t;

	}
	if(y>z)
	{
		t=y;
		y=z;
		z=t;
	}
	
	printf("这三个数从小到大排序为:%d >%d >%d",x,y,z);
	return 0;
}