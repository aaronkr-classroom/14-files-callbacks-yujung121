// fprintf.c

#include <stdio.h>

int main(void) {
	char* string = "World, Helllo!";
	short int data = 0xAEFC; // 16����

	// ���� ���� �ؽ�Ʈ ������ ������
	FILE* p_file = fopen("hello.txt", "wt");
	if (NULL != p_file) { // ���� ���⿡ ������ ���
		fprintf(p_file, "%s\n", string);
		fprintf(p_file, "%x\n", data);

		printf("���� ������ �̷��� ����!");

		fclose(p_file);
	}
	return 0;
}