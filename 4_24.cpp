#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>

//void* my_memmove(void* dest, void* src,size_t count)
//{
//	void* ret=dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	if(dest<src)
//	{
//		while(count--)
//	   {
//		   *(char*)dest=*(char*)src;
//		   ++(char*)dest;
//		   ++(char*)src;
//	    }
//	}
//	else
//	{
//		while(count--)
//		{
//			*((char*)dest+count)=*((char*)src+count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	my_memmove(arr+2,arr,20);//实现memmove库函数的功能
//	return 0;
//}


//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[]={1,2,4,3,5};
//	int ret=memcmp(arr1,arr2,9);
//	return 0;
//}

//#pragma pack(4)//设置默认值为4
//struct stu
//{
//	char name;
//	int age;
//	double b;
//};
//#pragma pack()//恢复默认值
//int main()
//{
//	struct stu s={0};
//	printf("%d\n",sizeof( s));
//	return 0;
//}

#include<stddef.h>

struct s
{
	char a;
	int i;
	double b;
};
int main()
{
	printf("%d\n",offsetof(struct s,a));//计算变量a相对于结构体首地址的偏移量
	printf("%d\n",offsetof(struct s,i));//计算变量i相对于结构体首地址的偏移量
	printf("%d\n",offsetof(struct s,b));//计算变量b相对于结构体首地址的偏移量
	return 0;
}