#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int dice_time[36000] = { 0 };
	int first, second, total;

	srand(time(0));
	
	first = rand() % 5 + 1;
	second = rand() % 5 + 1;
	total = first + second;
	printf("�Ĥ@�����%d�ĤG�����%d�`�X��%d", first, second, total);
	system("pause");
	return 0;
}