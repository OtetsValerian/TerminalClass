#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "rus");
	int A, B, C, D;
	A = -100 + rand() % (100 + 100 + 1);
	B = A + rand() % (100 - A + 1);
	int AB = abs(A) + abs(B);
	printf("������� �������: [%d, %d]\n", A, B);


	printf("������� �����: ");
	scanf_s("%f %f", &C, &D);
	if ((C > B) || (D > B))
	{
		printf("����� ������ ���� ����� ����� �");
	}
	else
	{
		if ((C > A) || (D > A))
		{
			printf("%.0f", AB);
		}
		else
		{
			printf("������ ������� �� ����������!");
		}
	}
	return 0;
}