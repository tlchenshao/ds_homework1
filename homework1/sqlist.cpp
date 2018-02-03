#include "sqlist.h"
#include <stdio.h>
#include <assert.h>

void init_sqlist(list *p)//初始化顺序表
{
	assert(p != NULL);
	for (int i=0;i<MAXSIZE;++i)
	{
		p->data[i] = 0;
	}
	p->len = 0;
}

bool is_empty(list *p)
{
	if (p->len == 0)
	{
		return true;
	}
	return false;
}

bool is_full(list *p)
{
	if (p->len == MAXSIZE)
	{
		return true;
	}
	return false;
}

int get_len(list *p)
{
	return p->len;
}

void insert_tail(list *p,int value)
{
	if (is_full(p))
	{
		printf("error....\n");
		return ;
	}
	p->data[p->len] = value;
	p->len ++;
}

void insert_head(list *p,int value)
{
	if (!is_full(p))
	{
		for(int i=p->len-1;i>=0;i--)
		{
			p->data[i+1] = p->data[i];
		}
		p->data[0] = value;
		p->len ++;
	}
}
                          //-2
bool insert_pos(list *p,int pos,int value)
{
	//异常位置不能插  满了不能插
	if(is_full(p) || pos > p->len || pos < 0)
	{
		return false;
	}
	for(int i=p->len-1;i>=pos;--i)
	{
		p->data[i+1] = p->data[i];
	}
	p->data[pos] = value;
	p->len ++;
	return true;
}

void clear_sqlist(list *p)
{
	for (int i=0;i<MAXSIZE;++i)
	{
		p->data[i] = 0;
	}
	p->len = 0;
}