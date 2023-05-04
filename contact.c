#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(struct contact* ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->sz=0;
}
void AddContact( struct contact* ps)
{
	if(ps->sz==MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s",ps->data[ps->sz].name);
		printf("请输入年龄:");
		scanf("%d",&(ps->data[ps->sz].age));
		printf("请输入性别:");
		scanf("%s",ps->data[ps->sz].sex);
		printf("请输入电话:");
		scanf("%s",ps->data[ps->sz].tele);
		printf("请输入地址:");
		scanf("%s",ps->data[ps->sz].addr);
		ps->sz++;
		printf("添加成功\n");
	}
}

void ShowContact(struct contact* ps)
{
	int i=0;
	if(ps->sz==0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","地址");
		for(i=0;i<ps->sz;i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

static int FindByName(const struct contact* ps,char name[MAX_NAME])
{
	int i=0;
	for(i=0;i<ps->sz;i++)
	{
		if(0==strcmp(name,ps->data[i].name))
		{
			return i;
		}
	}
	return -1;
}



void DelContact(struct contact* ps)
{
	int ret=0;
	char name[MAX_NAME];
	printf("请输入要删除的名字:>");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(-1==ret)
	{
		printf("查无此人\n");
	}
	else
	{
		int j=0;
		for(j=ret;j<ps->sz-1;j++)
		{
			ps->data[j]=ps->data[j+1];
		}
		ps->sz--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct contact* ps)
{
	int ret=0;
	char name[MAX_NAME];
	printf("请输入要删除的名字:>");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(-1==ret)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[ret].name,
				ps->data[ret].age,
				ps->data[ret].sex,
				ps->data[ret].tele,
				ps->data[ret].addr);
	}
}
void MoifyContact(struct contact* ps)
{
	int ret=0;
	char name[MAX_NAME];
	printf("请输入要修改人的名字:>");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(-1==ret)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s",ps->data[ret].name);
		printf("请输入年龄:");
		scanf("%d",&(ps->data[ret].age));
		printf("请输入性别:");
		scanf("%s",ps->data[ret].sex);
		printf("请输入电话:");
		scanf("%s",ps->data[ret].tele);
		printf("请输入地址:");
		scanf("%s",ps->data[ret].addr);
		printf("修改成功\n");
	}
}


int gym(const void* e1,const void* e2)
{
	return (int) (strcmp(((struct contact*)e1)->data->name,((struct contact*)e2)->data->name));
}


void SortContact(struct contact* ps)
{
	
	qsort(ps->data,ps->sz,sizeof(ps->data[0]),gym);
	printf("排序成功\n");
}