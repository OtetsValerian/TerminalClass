#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c, S, p;
	printf("Введите стороны треугольника: ");
	scanf_s("%f %f %f", &a, &b, &c);
	if ((a > 0) && (b > 0) && (c > 0))
	{
		if ((a <= b + c) && (c <= a + c) && (b <= a + c))
		{
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - c) * (p - b));

			printf("Полупериметр: %.2f\nПлощадь: %.2f\n", p, S);
		}
		else
		{
			printf("Такого треугольника не существует!");
		}
	}
	else
	{
		printf("Таких сторон не существует!");
	}
	return 0;
}
