#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//1,2,3,4���һ����λ�������ظ�
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


//��ҵ���ŵĽ������������ɡ�
//
//����(I)���ڻ����10��Ԫʱ���������10%��
//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
//20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
//40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
//����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�

//�Լ�д��
//int main()
//{
//	double i=0.0;
//	double a=0.0;
//	printf("�����Ƕ�����Ԫ\n");
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


//���˴�д��
//int main()
//{
//	double i=0;
//	double bonuse1,bonuse2,bonuse4,bonuse6,bonuse10,bonuse;
//	printf("��������:\n");
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
//	printf("����Ϊ:%lf\n",bonuse);
//}

//��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
//
//���������
//
//�������Ϊ x��
//
//1����x + 100 = n2, x + 100 + 168 = m2
//
//2�������ʽ��m2 - n2 = (m + n)(m - n) = 168
//
//3�����ã� m + n = i��m - n = j��i * j =168��i �� j ����һ����ż��
//
//4���ɵã� m = (i + j) / 2�� n = (i - j) / 2��i �� j Ҫô����ż����Ҫô����������
//
//5���� 3 �� 4 �Ƶ���֪����i �� j ���Ǵ��ڵ��� 2 ��ż����
//
//6������ i * j = 168�� j>=2���� 1 < i < 168 / 2 + 1��
//
//7���������� i ����������ѭ�����㼴�ɡ�




//���������ֽ����С���ֽ���ĸ�����һ��С�������жϵ�ǰ�������ֽ���

//int main()
//{
//	int ret = check_sys();
//	if(ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
////����2
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
printf("n��ֵΪ��%d\n",n);
printf("*pFloat��ֵΪ��%f\n",*pFloat);
*pFloat = 9.0;
printf("num��ֵΪ��%d\n",n);
printf("*pFloat��ֵΪ��%f\n",*pFloat);
return 0;
}