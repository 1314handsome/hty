#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


//λ�ˡ���������
//���ã���ʡ�ռ�
//struct S
//{
//	int a:5;
//	int b:10;
//	int c:15;
//	int d:30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));
//}



//��ƽ̨λ���Ǵ������Ҵ洢����λ���λ
//struct S
//{
//	char a:3;
//	char b:4;
//	char c:5;
//	char d:4;
//};
//
//int main()
//{
//	struct S s={0};
//	s.a=10;
//	s.b=20;
//	s.c=3;
//	s.d=4;
//	return 0;
//}


//ö������
enum sex
{
	MALE,
	FEMALE,
	SEARET,
};


enum color
{
	RED,
	GREEN,
	BLUE,
};

int main()
{
	/*enum sex s=MALE;
	enum color c=RED;*/
	printf("%d %d %d\n",RED,GREEN,BLUE);
	return 0;
}