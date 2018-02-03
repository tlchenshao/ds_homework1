#include <stdio.h>
#include "sqlist.h"


void main()
{
	list l;
	init_sqlist(NULL);

	insert_pos(&l,7,35);

	clear_sqlist(&l);

	//is_empty(&l);

}


/*
void get_max(int *arr,int len,int *t)
{
	int max = arr[0];
	for (int i=0;i<len;++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	*t = max;
}

void main()
{
	int arr[] = {55,33,99,66,77};
	int len = sizeof(arr)/sizeof(arr[0]);
	int temp;


	get_max(arr,len,&temp);
	printf("%d\n",temp);
}
*/


