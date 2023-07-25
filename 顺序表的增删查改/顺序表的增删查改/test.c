#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void test1()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPopBack(&s);
	SLPopBack(&s);
	//SLPopBack(&s);
	//SLPopBack(&s);
	//SLPopBack(&s);
	SLPrint(&s);
	SLDestroy(&s);
}

void test2()
{
	SL s;
	SLInit(&s);
	SLPushFront(&s, 1);
	SLPushFront(&s, 2);
	SLPushFront(&s, 3);
	SLPushFront(&s, 4);
	SLPushFront(&s, 5);
	SLPopFront(&s);
	//SLPopFront(&s);
	//SLPopFront(&s);
	//SLPopFront(&s);
	//SLPopFront(&s);
	SLPrint(&s);
	SLDestroy(&s);

}


void test3()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2); 
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushFront(&s, 5);
	SLPushFront(&s, 6);
	SLPushFront(&s, 7);
	SLPushFront(&s, 0);
	SLPopBack(&s);
	SLPopFront(&s);
	SLPrint(&s);
	int num=SLFind(&s, 7);
	if (num >= 0)
		printf("找到了，下标为%d\n", num);
	else
		printf("没找到\n");
	SLInsert(&s, 4, -1);
	SLPrint(&s);
	SLErase(&s, 3);
	SLPrint(&s);
	SLDestroy(&s);


}
int main()
{
	//test1();
	//test2();
	test3();

	return 0;
}