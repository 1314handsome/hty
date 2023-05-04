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
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������:");
		scanf("%s",ps->data[ps->sz].name);
		printf("����������:");
		scanf("%d",&(ps->data[ps->sz].age));
		printf("�������Ա�:");
		scanf("%s",ps->data[ps->sz].sex);
		printf("������绰:");
		scanf("%s",ps->data[ps->sz].tele);
		printf("�������ַ:");
		scanf("%s",ps->data[ps->sz].addr);
		ps->sz++;
		printf("��ӳɹ�\n");
	}
}

void ShowContact(struct contact* ps)
{
	int i=0;
	if(ps->sz==0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
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
	printf("������Ҫɾ��������:>");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(-1==ret)
	{
		printf("���޴���\n");
	}
	else
	{
		int j=0;
		for(j=ret;j<ps->sz-1;j++)
		{
			ps->data[j]=ps->data[j+1];
		}
		ps->sz--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct contact* ps)
{
	int ret=0;
	char name[MAX_NAME];
	printf("������Ҫɾ��������:>");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(-1==ret)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
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
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(-1==ret)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("����������:");
		scanf("%s",ps->data[ret].name);
		printf("����������:");
		scanf("%d",&(ps->data[ret].age));
		printf("�������Ա�:");
		scanf("%s",ps->data[ret].sex);
		printf("������绰:");
		scanf("%s",ps->data[ret].tele);
		printf("�������ַ:");
		scanf("%s",ps->data[ret].addr);
		printf("�޸ĳɹ�\n");
	}
}


int gym(const void* e1,const void* e2)
{
	return (int) (strcmp(((struct contact*)e1)->data->name,((struct contact*)e2)->data->name));
}


void SortContact(struct contact* ps)
{
	
	qsort(ps->data,ps->sz,sizeof(ps->data[0]),gym);
	printf("����ɹ�\n");
}