#include <stdio.h>
#include <locale.h>
#include <iso646.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int year, month, day, hour, minute;
	printf("������� ���� � �������: ");
	scanf_s("%d.%d.%d", &day, &month, &year);
	if (year % 4 == 0)
	{
		if (month > 12 || ((month / 4 == 1) && (month / 6 == 1) && (month / 9 == 1) && (month / 11 == 1) && day > 30) || ((month / 1 == 1) && (month / 3 == 1) && (month / 5 == 1) && (month / 7 == 1) && (month / 8 == 1) && (month / 12 == 1) && month / 11 == 1 && day > 31) || (month / 2 == 1 && day == 29))
		{
			printf("�� ���������� ����\n");
			system("pause");
			return 0;
		}
	}

	if (!(year % 4 == 0))
	{
		if (month > 12 || ((month / 4 == 1) && (month / 6 == 1) && (month / 9 == 1) && (month / 11 == 1) && day > 30) || ((month / 1 == 1) && (month / 3 == 1) && (month / 5 == 1) && (month / 7 == 1) && (month / 8 == 1) && (month / 12 == 1) && month / 11 == 1 && day > 31) || (month / 2 == 1 && day == 28))
		{
			printf("�� ���������� ����\n");
			system("pause");
			return 0;
		}
	}

	system("cls");
	printf("������� ����� � ����������: ");
	scanf_s("%d:%d", &hour, &minute);

	if (hour > 23 || minute > 59)
	{
		printf("�� ���������� �����\n");
		system("pause");
		return 0;
	}

	system("cls");
	printf("� �������� %d.%d.%d \t %d:%d\n�������, �� ��������!\n", day, month, year, hour, minute);
	return 0;
}