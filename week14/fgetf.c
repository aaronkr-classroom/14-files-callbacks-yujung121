// fgetf.c
#include <stdio.h>

int main(void) {
	char temp[100]; // ���Ͽ��� ���ڿ��� �Է¹��� �迭
	FILE* p_file = fopen("long.txt", "rt");
	if (NULL != p_file) {	
		while (NULL != fgets(temp, sizeof(temp), p_file));{
			printf("%s", temp);
		}
		fclose(p_file);
	}
	return 0;
}