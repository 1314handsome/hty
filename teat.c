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
////������     ������Ϣ
////0          No error
////1          Operation not permitted
////2          No such file or directory
//
////errno��һ���������ȫ�ֱ���
////��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno�У�
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
//	////int ret=islower(ch);//�ж��ǲ���Сд��ĸ���ǵĻ����ط���ֵ�����Ƿ�����
//	//int ret=isdigit(ch);//�ж��ǲ���ʮ�������֣��ǵĻ����ط���ֵ�����Ƿ�����
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
	struct s arr1[]={{"����",20},{"����",25}};
	struct s arr2[5]={0};
	my_memcpy(arr2,arr1,sizeof(arr1));
	return 0;
}