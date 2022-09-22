#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "rus");
	int x, y, smenna, sqrt_abs, sqrt_1;
	printf("Введите числа: ");
	scanf_s("%d %d", &x, &y);
	if (x > y)
	{
		if ((x > -10) && (x < 10) && (y > -10) && (y < 10))
		{
			printf("%d", x - y);
		}
		else if ((y < -10) && (x < -10))
		{
			printf("%d", pow(x, 2) + pow(y, 2));
		}
		else if ((y > 10) && (x > 10))
		{
			printf("%d", sqrt(x) + sqrt(y));
		}
		else if ((x == -10) || (x == 10) && (y == -10) || (y == 10))
		{
			;
		}
		else
		{
			printf("Так нельзя");
		}
	}
	else
	{
		x = -100 + rand() % (100 + 100 + 1);
		y = x + rand() % (100 - x + 1);
		printf("Измененные числа: x = %d, y = %d\n", x, y);
		smenna = x;
		x = y;
		y = smenna;
		sqrt_abs =abs(x) - abs(y);
		if (sqrt_abs < 0)
		{
			sqrt_abs *= (-1);
			sqrt_1 = sqrt(sqrt_abs);
			printf("Разность корней: %di", sqrt_1);
		}
		else
		{
			printf("Разность корней: %d", sqrt(sqrt_abs));
		}
		

	}
	return 0;
}