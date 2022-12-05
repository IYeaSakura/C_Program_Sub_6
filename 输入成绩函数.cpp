#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "miku.h"

extern void _Enter(extern op* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("录入第%d位学生的数据：\n", i + 1);
		printf("姓名：");
		scanf_s("%s", (a + i)->Name, 8);
		printf("学号：");
		scanf_s("%lld", (a + i)->Id);
		printf("成绩一：");
		scanf_s("%d", (a + i)->Grade_One);
		printf("成绩二：");
		scanf_s("%d", (a + i)->Grade_Two);
		(*(a + i)->Grade_All) = (*(a + i)->Grade_One) + (*(a + i)->Grade_Two);
	}
}