#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int diceroll(void);//宣告擲骰子函式

int main()
{
	int dice1;//宣告第一顆骰子
	int dice2;//宣告第二顆骰子
	int dicetotal;//兩顆骰子加總
	int dicearray[11] = { 0 };//

	srand(time(NULL));

	for (int i = 0; i < 36000; i++)//骰36000次
	{
		dice1 = diceroll();
		dice2 = diceroll();
		dicetotal = dice1 + dice2;
		dicetotal -= 2;//陣列從0開始
		dicearray[dicetotal]++;
	}
	printf("%s%17s\n", "total", "frequency");
	for (int j = 2; j < 13; j++)
	{
		printf("%5d%17d\n", j, dicearray[j - 2]);//只會有2~12
	}
	return 0;
}
int diceroll(void)
{
	int a;
	a = 1 + rand() % 6;
	return a;
}