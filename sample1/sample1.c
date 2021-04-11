// sample1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include<stdio.h>

int main(int argc, char *argv[])
{
	int price = 100;
	int amount = 5;

	printf("小計 %d * %d = %d\n", price, amount, price * amount);
	printf("合計 %d", (int)(price * amount * 1.08f));
}
