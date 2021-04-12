// sample1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include<stdio.h>

void calcItemPrice(char* name, int price, int amount, float tax, int* excludeTax, int* includeTax);
void printSummary(int price);

const double TAX = 1.08f;

int main(int argc, char *argv[])
{
    int priceA = 100;
    int amountA = 5;

    int priceB = 200;
    int amountB = 3;
    
    int summary = 0;
    
    int etax, itax;
    calcItemPrice("A", priceA, amountA, 0.08f, &etax, &itax);
    summary += itax;

    calcItemPrice("B", priceA, amountB, 0.10f, &etax, &itax);
    summary += itax;

    printSummary(summary);
}

/**
* 小計の計算と表示
* name   品名
* price  単価
* amount 数量
* tax 消費税
* [out] excluteTax 税抜の小計
* [out] includeTax 税込の小計
**/
void calcItemPrice(char* name, int price, int amount, float tax, int *excludeTax, int *includeTax)
{
    *excludeTax = price * amount;
    *includeTax = *excludeTax +  *excludeTax * tax;
    printf("小計(%s) %5d * %2d 税率:%.2f 税抜:%5d 税込:%5d\n", name, price, amount, tax, *excludeTax, *includeTax);
}

/**
* 合計を表示
* summary 合計
**/
void printSummary(int summary)
{
    printf("合計 %d\n",  summary);
}
