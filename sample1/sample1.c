// sample1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include<stdio.h>

int main(int argc, char *argv[])
{
    int priceA = 100;
    int amountA = 5;

    int priceB = 200;
    int amountB = 3;
    
    int summary = 0;

    printf("小計(A) %d * %d = %d\n", priceA, amountA, priceA * amountA);
    summary += priceA * amountA;

    printf("小計(B) %d * %d = %d\n", priceB, amountB, priceB * amountB);
    summary += priceB * amountB;

    printf("合計 %d", (int)(summary * 1.08f));
}
