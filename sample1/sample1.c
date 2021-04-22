// sample1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include<stdio.h>
#include<string.h>

#include "person.h"

int main(int argc, char *argv[])
{
	struct Person yamada;
	struct Person tanaka;

	memset(&yamada, 0, sizeof(yamada));
	
	// strncpyは非推奨なので、コンパイラのエラーを無効にしています
	#pragma warning(suppress : 4996) 
	strncpy(yamada.name, "Yamada Taro", sizeof(yamada.name));
	yamada.age = 20;


	memset(&tanaka, 0, sizeof(tanaka));
	strncpy_s(tanaka.name, sizeof(tanaka.name), "Tanaka Jiro", sizeof("Tanaka Jiro"));
	tanaka.age = 10;

	printf("name=%s age=%d \n", yamada.name, yamada.age);
	printf("name=%s age=%d \n", tanaka.name, tanaka.age);

}
