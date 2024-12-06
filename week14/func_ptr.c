// func_ptr.c
#include <stdio.h>

int Sum(int a, int b) { return a + b; } // ����
int Sub(int a, int b) { return a - b; } // ����
int Mul(int a, int b) { return a * b; } // ����
int Div(int a, int b) { return a / b; } // ������

int main(void) {
	// �Լ� �����͸� �迭�� �����ϰ� �Լ� ������ int func(int, int); �� ���� �� �Լ��� �ּ� ���� ������.
	int(*p[4])(int, int) = {
		&Sum, &Sub, &Mul, &Div
	};
	int x = 8, y = 4;
	char op_table[4] = { '+', '-', '*', '/' };
	// Sum, Sub, Mul, Div ������ ȣ����
	for (int i = 0; i < 4; i++) {
		printf("%d %c %d = %d\n", x, op_table[i], y, (*p[i])(x,y));
	}

	return 0;
}