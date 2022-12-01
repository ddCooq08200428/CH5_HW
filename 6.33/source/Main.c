#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int binarysearch(const int array1[], int low, int high, int searchkey);

int main()
{
	int array1[] = { 0,3,8,11,15,20,24,30,50,56,64,73,88,90,99 };
	int searchkey;
	int ans;
	printf("Enter searchkey: ");
	scanf_s("%d", &searchkey);
	printf("Subscr5ipts:\n");
	for (int i = 0; i < sizeof(array1) / sizeof(int); i++)
	{
		printf("%d\t", array1[i]);
	}
	printf("\n");
	ans = binarysearch(array1, 0, sizeof(array1) / sizeof(int), searchkey);
	if (ans == -1)
	{
		printf("not found");
	}
	else
	{
		printf("在第%d個元素找到%d", ans, searchkey);
	}
	return 0;
}
int binarysearch(const int array1[], int low, int high, int searchkey)
{
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;

		if (array1[mid] == searchkey)
		{
			return mid;
		}
		else if (array1[mid] > searchkey)
		{
			high = mid - 1;
		}
		else if (array1[mid] < searchkey)
		{
			low = mid + 1;
		}
	}
	return -1;
}