#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


//位端——二进制
//作用：节省空间
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



//该平台位段是从左向右存储，低位向高位
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


//枚举类型
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