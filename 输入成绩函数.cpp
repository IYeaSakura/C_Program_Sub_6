#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "miku.h"

extern void _Enter(extern op* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("¼���%dλѧ�������ݣ�\n", i + 1);
		printf("������");
		scanf_s("%s", (a + i)->Name, 8);
		printf("ѧ�ţ�");
		scanf_s("%lld", (a + i)->Id);
		printf("�ɼ�һ��");
		scanf_s("%d", (a + i)->Grade_One);
		printf("�ɼ�����");
		scanf_s("%d", (a + i)->Grade_Two);
		(*(a + i)->Grade_All) = (*(a + i)->Grade_One) + (*(a + i)->Grade_Two);
	}
}