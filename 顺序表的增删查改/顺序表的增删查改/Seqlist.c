#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"


void SLInit(SL* ps)
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->a == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}


void SLDestroy(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}


void SLPrint(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		SLDataType* temp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * 2 * ps->capacity);
		if (temp == NULL)
		{
			perror("realloc");
			exit(-1);
		}
	ps->a = temp;
	ps->capacity = ps->capacity * 2;
	}
	
}


void SLPushBack(SL* ps,SLDataType x)
{
	SLCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;

}


void SLPopBack(SL* ps)
{
//这里ps->size为1之后，size--为 0，下次就不能再进来了，否则size<0就越界了
	assert(ps->size > 0);
	ps->size--;
}

void SLPushFront(SL* ps,SLDataType x)
{
	SLCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
	
}

void SLPopFront(SL* ps)
{
	assert(ps->size > 0);
	int start = 0;
	while (start<ps->size)
	{
		ps->a[start] = ps->a[start+1];
		start++;
	}

	ps->size--;
}

////二分查找，打印下标(写一半，发现不行，数字不一定是有序的)
//int SLFind(SL* ps, SLDataType x)
//{
//	int start = 0;
//	int end = ps->size - 1;
//	int mid = (start + end) / 2;
//	while (ps->a[start] < ps->a[end])
//	{
//		if (ps->a[mid] == x)
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//		else if (ps->a[mid] < x)
//		{
//
//		}
//
//	}
//}



int SLFind(SL* ps, SLDataType x)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
			
	}
	return -1;
}


void SLInsert(SL* ps, int pos, SLDataType x)
{
	SLCheckCapacity(ps);
	int count = ps->size - pos;
	int num = ps->size - 1;
	while (count)
	{
		ps->a[num+1] = ps->a[num];
		num--;
		count--;
	}
	ps->a[pos] = x;
	ps->size++;

}

void SLErase(SL* ps, int pos)
{
	int count = ps->size - pos - 1;
	int num = pos;
	while (count)
	{
		ps->a[num] = ps->a[num + 1];
		num++;
		count --;
	}
	ps->size--;

}
