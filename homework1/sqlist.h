#ifndef SQLIST   //��ֹͷ�ļ���������
#define SQLIST

//�Ƕ�����˳���

#define MAXSIZE 10
typedef int elem_type;

typedef struct sqlist
{
	elem_type data[MAXSIZE]; //����˳���
	int len;// ����˳������м���Ԫ��
}list;


void init_sqlist(list *p);//��ʼ��˳���

bool is_empty(list *p);

bool is_full(list *p);

int get_len(list *p);

void insert_tail(list *p,elem_type value);

void insert_head(list *p,elem_type value);

bool insert_pos(list *p,int pos,elem_type value);

void clear_sqlist(list *p);

#endif