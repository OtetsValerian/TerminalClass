#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c, S, p;
	printf("������� ������� ������������: ");
	scanf_s("%f %f %f", &a, &b, &c);
	if ((a > 0) && (b > 0) && (c > 0))
	{
		if ((a <= b + c) && (c <= a + c) && (b <= a + c))
		{
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - c) * (p - b));

			printf("������������: %.2f\n�������: %.2f\n", p, S);
		}
		else
		{
			printf("������ ������������ �� ����������!");
		}
	}
	else
	{
		printf("����� ������ �� ����������!");
	}
	return 0;
}
