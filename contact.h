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
//��������
//��ʼ������
void InitContact(struct contact* ps);
//���һ����Ա��ͨѶ¼��
void AddContact(struct contact* ps);
//��ӡͨѶ¼
void ShowContact(const struct contact* ps);
//ɾ��ͨѶ¼��ĳ����Ա
void DelContact(struct contact* ps);
//���ҳ�Ա
void SearchContact(const struct contact* ps);
//�޸���ϵ����Ϣ
void MoifyContact(struct contact* ps);
//����
void SortContact(struct contact* ps);
