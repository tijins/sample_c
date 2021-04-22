// sample1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include<stdio.h>
#include<string.h>

#include "person.h"

#define MEMBER_MAX 3

int main(int argc, char *argv[])
{
	struct Person members[MEMBER_MAX];
	char nameTemp[sizeof(members[0].name)];
	char lastTemp[2];
	int ageTemp;
	int count = 0;
	int i;

	while (count < MEMBER_MAX)
	{

		printf("name ?>");
		scanf_s("%s", nameTemp, sizeof(nameTemp));

		printf("age ?>");
		scanf_s("%d", &ageTemp, sizeof(ageTemp));

		printf("finish (Y=end) ?>");
		scanf_s("%s", lastTemp, sizeof(lastTemp));

		memset(&members[count], 0, sizeof(members[count]));
		strncpy_s(members[count].name, sizeof(members[count].name), nameTemp, sizeof(nameTemp));
		members[count].age = ageTemp;
		
		count++;

		// 途中で終わる
		if (lastTemp[0] == 'Y') {
			break;
		}
	}

	for (i = 0; i < count; i++)
	{
		printf("name=%s age=%d \n", members[i].name, members[i].age);
	}

}
