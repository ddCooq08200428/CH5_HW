#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int diceroll(void);//�ŧi�Y��l�禡

int main()
{
	int dice1;//�ŧi�Ĥ@����l
	int dice2;//�ŧi�ĤG����l
	int dicetotal;//������l�[�`
	int dicearray[11] = { 0 };//

	srand(time(NULL));

	for (int i = 0; i < 36000; i++)//��36000��
	{
		dice1 = diceroll();
		dice2 = diceroll();
		dicetotal = dice1 + dice2;
		dicetotal -= 2;//�}�C�q0�}�l
		dicearray[dicetotal]++;
	}
	printf("%s%17s\n", "total", "frequency");
	for (int j = 2; j < 13; j++)
	{
		printf("%5d%17d\n", j, dicearray[j - 2]);//�u�|��2~12
	}
	return 0;
}
int diceroll(void)
{
	int a;
	a = 1 + rand() % 6;
	return a;
}