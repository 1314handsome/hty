#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr[]="123.25.65.31";
//	char* p=".";
//	char buf[1024]={0};
//	char* ret=NULL;
//	strcpy(buf,arr);
//	for(ret=strtok(buf,p);ret!=NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

#include <errno.h>


//int main()
//{
////错误码     错误信息
////0          No error
////1          Operation not permitted
////2          No such file or directory
//
////errno是一个错误码的全局变量
////当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中；
//	/*char*p =strerror(errno);
//	printf("%s\n",p);*/
//	FILE* fp=fopen("text.txl","r");
//	if(fp==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}



#include<ctype.h>
//int main()
//{
//	//char ch='4';
//	////int ret=islower(ch);//判断是不是小写字母，是的话返回非零值，不是返回零
//	//int ret=isdigit(ch);//判断是不是十进制数字，是的话返回非零值，不是返回零
//	//printf("%d\n",ret);
//	//return 0;
//    //char ch=tolower('Q');
//	char ch=toupper('q');
//	putchar(ch);
//}

struct s
{
	char name[30];
	int age;
};
void* my_memcpy(void* dest,const void* sct,size_t num)
{
	void* ret=dest;
	while(num--)
	{
		*(char*)dest=*(char*)sct;
		++(char*)dest;
		++(char*)sct;
	}
	return ret;
}
int main()
{
	struct s arr1[]={{"张三",20},{"李四",25}};
	struct s arr2[5]={0};
	my_memcpy(arr2,arr1,sizeof(arr1));
	return 0;
}