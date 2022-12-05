#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "miku.h"    //Miku殿下天下第一！愿Miku殿下祝我的程序没有Bug！

extern void _Enter(op* a, int n);
extern void _Sort(op* a, op* b, op* c, op* d, int n);
extern void _Puts(op* a, op* b, op* c, op* d, int n);

int main() {
	int n;
	printf("输入学生的数量：");
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
//调用_Enter()函数输入
	_Enter(p, n);
	printf("\n");
//调用_Sort()函数排序
	_Sort(p, p_one, p_two, p_all, n);
	printf("\n");
//调用_Puts()函数输出
	_Puts(p, p_one, p_two, p_all, n);
	printf("\n");
//调用_Search()函数查找
	return 0;
}