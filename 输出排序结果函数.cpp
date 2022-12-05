#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "miku.h"

extern void _Puts(op* a, op* b, op* c, op* d, int n) {
	int i;
	//输出未排序的结果
	printf("未排序的结果：\n");
	for (i = 0; i < n; i++) {
		printf("第%d位学生的数据：\n", i + 1);
		printf("姓名：%s\n", (a + i)->Name);
		printf("学号：%lld\n", *(a + i)->Id);
		printf("成绩一：%d\n", *(a + i)->Grade_One);
		printf("成绩二：%d\n", *(a + i)->Grade_Two);
		printf("总成绩：%d\n", *(a + i)->Grade_All);
	}
	printf("\n");
	//输出对成绩一排序的结果
	printf("对成绩一排序的结果：\n");
	for (i = 0; i < n; i++) {
		printf("第%d位学生的数据：\n", i + 1);
		printf("姓名：%s\n", (b + i)->Name);
		printf("学号：%lld\n", *(b + i)->Id);
		printf("成绩一：%d\n", *(b + i)->Grade_One);
		printf("成绩二：%d\n", *(b + i)->Grade_Two);
		printf("总成绩：%d\n", *(b + i)->Grade_All);
	}
	printf("\n");
	//输出对成绩二排序的结果
	printf("对成绩二排序的结果：\n");
	for (i = 0; i < n; i++) {
		printf("第%d位学生的数据：\n", i + 1);
		printf("姓名：%s\n", (c + i)->Name);
		printf("学号：%lld\n", *(c + i)->Id);
		printf("成绩一：%d\n", *(c + i)->Grade_One);
		printf("成绩二：%d\n", *(c + i)->Grade_Two);
		printf("总成绩：%d\n", *(c + i)->Grade_All);
	}
	printf("\n");
	//输出对总成绩排序的结果
	printf("对总成绩排序的结果：\n");
	for (i = 0; i < n; i++) {
		printf("第%d位学生的数据：\n", i + 1);
		printf("姓名：%s\n", (d + i)->Name);
		printf("学号：%lld\n", *(d + i)->Id);
		printf("成绩一：%d\n", *(d + i)->Grade_One);
		printf("成绩二：%d\n", *(d + i)->Grade_Two);
		printf("总成绩：%d\n", *(d + i)->Grade_All);
	}
	printf("\n");
}