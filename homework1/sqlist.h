#ifndef SQLIST   //防止头文件被引入多次
#define SQLIST

//非定长的顺序表

#define MAXSIZE 10
typedef int elem_type;

typedef struct sqlist
{
	elem_type data[MAXSIZE]; //定长顺序表
	int len;// 代表顺序表中有几个元素
}list;


void init_sqlist(list *p);//初始化顺序表

bool is_empty(list *p);

bool is_full(list *p);

int get_len(list *p);

void insert_tail(list *p,elem_type value);

void insert_head(list *p,elem_type value);

bool insert_pos(list *p,int pos,elem_type value);

void clear_sqlist(list *p);

#endif