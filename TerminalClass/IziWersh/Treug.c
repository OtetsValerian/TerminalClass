#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int CH, AB;
	printf("������� ������ ������������:\t");
	scanf_s("%d", &CH);
	printf("������� ������ ������������:\t");
	scanf_s("%d", &AB);
	float S = (float) (CH * AB) / 2;
	printf("������� ������������: %.1f\n", S);
	system("pause");
	return 0;
}