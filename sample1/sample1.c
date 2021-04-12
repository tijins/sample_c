// sample1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include<stdio.h>

int sampleFunc(int value, int* pValue);

int main(int argc, char *argv[])
{
	int array[3] = {1,2,3};
	int num = 1;
	int* p_num = &num;
	printf("num %p=%d\n", &num, num);// &変数名 で numのポインタに変換できる
	*p_num = 2;// *ポインタ名で、ポインタが指す先の変数にアクセスできる
	printf("p_num %p=%d\n", p_num, num);// &変数名 で numのポインタに変換できる
	printf("\n");

	printf("array %p\n", array);//配列名は、配列の先頭要素のポインタ
	printf("array %p=%d\n", &array[0], array[0]);
	printf("array %p=%d\n", &array[1], array[1]);
	printf("array %p=%d\n", &array[2], array[2]);
	printf("\n");

	array[0] = 10;
	printf("array %p=%d\n", &array[0], array[0]);

	array[1] = 20;
	*(array+1) = 20;//array[1]と*(array+1)は同じ意味
	printf("array %p=%d\n", &array[1], array[1]);
	printf("array %p=%d\n", array+1, *(array+1));

	//値渡しと参照渡し
	int valueA = 10;
	int valueB = 10;
	sampleFunc(valueA, &valueB);
	printf("valueA=%d, valueV=%d", valueA, valueB);
}

int sampleFunc(int value, int* pValue)
{
	value = value + 1;
	*pValue = *pValue + 1;
}
