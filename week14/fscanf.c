// fscanf.c
#include <stdio.h>

int main(void) {
	int num;
	int num_arr[10] = {
		412, 413, 414, 415, 416,
		417, 418, 419, 420, 421 
	};

	FILE* p_file = fopen("nums.txt", "wt"); //���ϻ���
	if (NULL != p_file) {
		printf("������ ���Ƚ��ϴ�.");
		
		for (int i = 0; i < 10; i++) {
			fprintf(p_file, "%d\n", num_arr[i]); 
		}

		printf("������ ������ ����ϴ�.");

		while (EOF != fscanf_s(p_file, "%d", &num)) {
			// ���Ͽ��� ���� ���� ���� ȭ�鿡 �����
			printf("%d", num);
		}

		printf("������ ������ �о����ϴ�.");

		fclose(p_file);

		printf("������ �ݾҽ��ϴ�.");
	}
	return 0;
}