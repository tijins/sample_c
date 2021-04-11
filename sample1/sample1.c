﻿// sample1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include<stdio.h>

int calcItemPrice(char *name, int price, int amount);

int main(int argc, char *argv[])
{
    int priceA = 100;
    int amountA = 5;

    int priceB = 200;
    int amountB = 3;
    
    int summary = 0;

    summary += calcItemPrice("A", priceA, amountA);
    summary += calcItemPrice("B", priceB, amountB);

    printf("合計 %d", (int)(summary * 1.08f));
}

/**
* 小計の計算と表示
* name   品名
* price  単価
* amount 数量
* 戻り値 小計金額
**/
int calcItemPrice(char* name, int price, int amount)
{
    int summary = price * amount;
    printf("小計(%s) %5d * %5d = %5d\n", name, price, amount, summary);

    return summary;
}