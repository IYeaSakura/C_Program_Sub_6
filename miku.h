#ifndef _MIKU_H_                 
#define _MIKU_H_

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
//�˽ṹ�����ڴ���ԭʼ����
typedef struct remember {
	char Name[8];
	unsigned long long Id[20];
	unsigned int Grade_One[8];
	unsigned int Grade_Two[8];
	unsigned int Grade_All[8];
}op;

#endif // !_MIKU_H_
#pragma once