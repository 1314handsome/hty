#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int year=0,mouth=0,day=0,sum=0;
//	printf("������������:>");
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
//		default:printf("�������\n");
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
//	printf("����һ��ĵ� %d ��",sum);
//	printf("\n");
//	return 0;
//}



//��Ŀ��������������x,y,z���������������С���������

//���������������취����С�����ŵ�x�ϣ��Ƚ�x��y���бȽϣ����x>y��x��y��ֵ���н�����Ȼ������x��z���бȽϣ����x>z��x��z��ֵ���н�����������ʹx��С��

int main()
{
	int x=0,y=0,z=0,t=0;
	printf("������������:>");
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
	
	printf("����������С��������Ϊ:%d >%d >%d",x,y,z);
	return 0;
}