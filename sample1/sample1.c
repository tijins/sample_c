// sample1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include<stdio.h>
#include<string.h>

#include "person.h"

#define MEMBER_MAX 3

void inputPerson(struct Person* person);

int main(int argc, char *argv[])
{
	struct Person members[MEMBER_MAX];
	int i;
	int memberCount;

	i = 0;
	while (i < MEMBER_MAX)
	{
		char lastTemp[2];
		inputPerson(&members[i]);
		
		printf("finish (Y=end) ?>");
		scanf_s("%s", lastTemp, sizeof(lastTemp));

		i++;
		memberCount = i;

		// 途中で終わる
		if (lastTemp[0] == 'Y') {
			break;
		}
	}

	for (i = 0; i < memberCount; i++)
	{
		printf("name=%s age=%d \n", members[i].name, members[i].age);
	}

}

void inputPerson(struct Person* person)
{
	char nameTemp[sizeof(person->name)];
	int ageTemp;

	printf("name ?>");
	scanf_s("%s", nameTemp, sizeof(nameTemp));

	printf("age ?>");
	scanf_s("%d", &ageTemp);


	memset(person, 0, sizeof(*person));
	strncpy_s(person->name, sizeof(person->name), nameTemp, sizeof(nameTemp));
	person->age = ageTemp;
}