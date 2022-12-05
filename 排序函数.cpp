#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "miku.h"

extern void _Sort(op* a, op* b, op* c, op* d, int n) {
	int i, j;
	//复制数据到其他结构体
	for (i = 0; i < n; i++) {
		*(b + i) = *(a + i);
		*(c + i) = *(a + i);
		*(d + i) = *(a + i);
	}
	//对成绩一排序
	for (i = 0; i < n; i++) {
		op* temp = (b + i);
		int pos = i;
		for (j = i + 1; j < n; j++) {
			if (*(b + j)->Grade_Two > *(b + j - 1)->Grade_Two) {
				*temp = *(b + j);
				pos = j;
			}
		}
		*(b + pos) = *(b + i);
		*(b + i) = *temp;
	}
	//对成绩二排序
	for (i = 0; i < n; i++) {
		for (j = n - 1; j >= i; j--) {
			if (*(c + j)->Grade_Two > *(c + j - 1)->Grade_Two) {
				op* temp = (c + j - 1);
				*(c + j - 1) = *(c + j);
				*(c + j) = *temp;
				temp = NULL;
			}
		}
	}
	//对总成绩排序
	for (i = 0; i < n; i++) {
		for (j = n - 1; j >= i; j--) {
			if (*(d + j)->Grade_All > *(d + j - 1)->Grade_All) {
				op* temp = (d + j - 1);
				*(d + j - 1) = *(d + j);
				*(d + j) = *temp;
				temp = NULL;
			}
		}
	}
}
