#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int number;
	puts("������� ����� ���������� �����\n");
	scanf("%d", &number);
	int cif = number % 10;
	switch (cif)
		{
		case 2:
		case 3:
		case 5:
		case 7:
			printf("��������� ����� ����� (%d) �������� ������� ������\n", cif);
			break;
		case 0:
		case 1:
		case 4:
		case 6:
		case 8:
		case 9:
			printf("��������� ����� ����� (%d) �� �������� ������� ������\n", cif);
			break;
		default:
			puts("������\n");
			break;
		}
	return 0;
}