#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int recursivemaximum(int array1[], int length);

int main()
{
	int length;
	int max;
	int ptr[] = { 1,5,8,4,98,51,2,68,33,65,816,854,214,68,10,54 };
	length = sizeof(ptr) / sizeof(int);
	max = recursivemaximum(ptr, length);
	printf("³Ì¤j­È¬°%d", max);
}

int recursivemaximum(int array1[], int length)
{
	int tmp;
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{
			if (array1[j] < array1[j + 1])
			{
				tmp = array1[j];
				array1[j] = array1[j + 1];
				array1[j + 1] = tmp;
			}
		}
	}
	return array1[0];
}