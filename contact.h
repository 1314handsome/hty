#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_ADDR 30
#define MAX_TELE 12

enum select
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};



struct peoinfo
{
	int age;
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
	char tele[MAX_TELE];
};

struct contact
{
	struct peoinfo data[MAX];
	int sz;
};
//函数声明
//初始化函数
void InitContact(struct contact* ps);
//添加一个成员到通讯录中
void AddContact(struct contact* ps);
//打印通讯录
void ShowContact(const struct contact* ps);
//删除通讯录的某个成员
void DelContact(struct contact* ps);
//查找成员
void SearchContact(const struct contact* ps);
//修改联系人信息
void MoifyContact(struct contact* ps);
//排序
void SortContact(struct contact* ps);
