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

//˳���ĳ�ʼ��
void SLInit(SL* ps);
//˳��������
void SLDestroy(SL* ps);
//˳���Ĵ�ӡ
void SLPrint(SL* ps);
//���˳����Ƿ�����
void SLCheckCapacity(SL* ps);




//β��
void SLPushBack(SL* ps,SLDataType x);
//βɾ
void SLPopBack(SL* ps); 
//ͷ��
void SLPushFront(SL* ps,SLDataType x);
//ͷɾ
void SLPopFront(SL* ps);




// ˳������
int SLFind(SL* ps, SLDataType x);
// ˳�����posλ�ò���x
void SLInsert(SL* ps, int pos, SLDataType x);
// ˳���ɾ��posλ�õ�ֵ
void SLErase(SL* ps, int pos);