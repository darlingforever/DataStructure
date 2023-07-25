#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;

//顺序表的初始化
void SLInit(SL* ps);
//顺序表的销毁
void SLDestroy(SL* ps);
//顺序表的打印
void SLPrint(SL* ps);
//检查顺序表是否已满
void SLCheckCapacity(SL* ps);




//尾差
void SLPushBack(SL* ps,SLDataType x);
//尾删
void SLPopBack(SL* ps); 
//头插
void SLPushFront(SL* ps,SLDataType x);
//头删
void SLPopFront(SL* ps);




// 顺序表查找
int SLFind(SL* ps, SLDataType x);
// 顺序表在pos位置插入x
void SLInsert(SL* ps, int pos, SLDataType x);
// 顺序表删除pos位置的值
void SLErase(SL* ps, int pos);