#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "miku.h"    //Miku�������µ�һ��ԸMiku����ף�ҵĳ���û��Bug��

extern void _Enter(op* a, int n);
extern void _Sort(op* a, op* b, op* c, op* d, int n);
extern void _Puts(op* a, op* b, op* c, op* d, int n);

int main() {
	int n;
	printf("����ѧ����������");
	scanf_s("%d", &n);
	struct remember* stu = (remember*)malloc(sizeof(remember) * n);
	struct remember* stu_sort_one = (remember*)malloc(sizeof(remember) * n);
	struct remember* stu_sort_two = (remember*)malloc(sizeof(remember) * n);
	struct remember* stu_sort_all = (remember*)malloc(sizeof(remember) * n);
	op* p = stu;
	op* p_one = stu_sort_one;
	op* p_two = stu_sort_two;
	op* p_all = stu_sort_all;
	printf("\n");
//����_Enter()��������
	_Enter(p, n);
	printf("\n");
//����_Sort()��������
	_Sort(p, p_one, p_two, p_all, n);
	printf("\n");
//����_Puts()�������
	_Puts(p, p_one, p_two, p_all, n);
	printf("\n");
//����_Search()��������
	return 0;
}