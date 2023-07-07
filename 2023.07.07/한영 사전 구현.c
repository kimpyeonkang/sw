#include <stdio.h>
#include <string.h>
#define words 5

int main(void)
{
	int i, index;
	char dic[words][2][30] = {
		{"book","책"},
		{"boy","소년"},
		{"computer","컴퓨터"},
		{"lanuguage","언어"},
		{"rain","비"}
	};
	
	char word[30];

	printf("단어를 입력하시오: ");
	scanf_s("%s", word);

	index = 0;
	for (i = 0; i < words; i++) {
		if (strcmp(dic[index][0], word) == 0) {
			printf("%s: %s\n", word, dic[index][1]);
			return 0;
		}
		index++;
	}
	printf("사전에서 발견되지 않았습니다.\n");
	return 0;
}