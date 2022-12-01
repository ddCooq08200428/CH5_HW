#include <stdio.h>
#include <string.h>
#define  _CRT_SECURE_NO_WARNINGS
void stringreverse(char array1[]);

void main()
{
	char str1[100];

	printf("\n\nPrint a string in reverse order:\n ");
	printf("-------------------------------------\n");

	stringreverse(str1);
}

void stringreverse(char array1[])
{
	int l, lind, rind, tmp;
	printf("Input a string to reverse : ");
	scanf_s("%s", array1);
	l = strlen(array1);
	lind = 0;
	rind = l - 1;
	for (int i = lind; i < rind; i++)
	{
		tmp = array1[i];
		array1[i] = array1[rind];
		array1[rind] = tmp;
		rind--;
	}
	printf("reversed string is: %s\n", array1);
}