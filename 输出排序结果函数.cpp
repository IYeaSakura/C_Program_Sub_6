#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "miku.h"

extern void _Puts(op* a, op* b, op* c, op* d, int n) {
	int i;
	//���δ����Ľ��
	printf("δ����Ľ����\n");
	for (i = 0; i < n; i++) {
		printf("��%dλѧ�������ݣ�\n", i + 1);
		printf("������%s\n", (a + i)->Name);
		printf("ѧ�ţ�%lld\n", *(a + i)->Id);
		printf("�ɼ�һ��%d\n", *(a + i)->Grade_One);
		printf("�ɼ�����%d\n", *(a + i)->Grade_Two);
		printf("�ܳɼ���%d\n", *(a + i)->Grade_All);
	}
	printf("\n");
	//����Գɼ�һ����Ľ��
	printf("�Գɼ�һ����Ľ����\n");
	for (i = 0; i < n; i++) {
		printf("��%dλѧ�������ݣ�\n", i + 1);
		printf("������%s\n", (b + i)->Name);
		printf("ѧ�ţ�%lld\n", *(b + i)->Id);
		printf("�ɼ�һ��%d\n", *(b + i)->Grade_One);
		printf("�ɼ�����%d\n", *(b + i)->Grade_Two);
		printf("�ܳɼ���%d\n", *(b + i)->Grade_All);
	}
	printf("\n");
	//����Գɼ�������Ľ��
	printf("�Գɼ�������Ľ����\n");
	for (i = 0; i < n; i++) {
		printf("��%dλѧ�������ݣ�\n", i + 1);
		printf("������%s\n", (c + i)->Name);
		printf("ѧ�ţ�%lld\n", *(c + i)->Id);
		printf("�ɼ�һ��%d\n", *(c + i)->Grade_One);
		printf("�ɼ�����%d\n", *(c + i)->Grade_Two);
		printf("�ܳɼ���%d\n", *(c + i)->Grade_All);
	}
	printf("\n");
	//������ܳɼ�����Ľ��
	printf("���ܳɼ�����Ľ����\n");
	for (i = 0; i < n; i++) {
		printf("��%dλѧ�������ݣ�\n", i + 1);
		printf("������%s\n", (d + i)->Name);
		printf("ѧ�ţ�%lld\n", *(d + i)->Id);
		printf("�ɼ�һ��%d\n", *(d + i)->Grade_One);
		printf("�ɼ�����%d\n", *(d + i)->Grade_Two);
		printf("�ܳɼ���%d\n", *(d + i)->Grade_All);
	}
	printf("\n");
}