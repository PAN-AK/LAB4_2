#include <stdio.h>
#include <locale.h>

void maim()
{
	setlocale(LC_ALL, "RUS");
	int n;
	scanf_s("%d", &n);
	int h = n / 100;
	int t = n % 10;
	int e = (n / 10) % 10;
	int sum = ("%d", h + t + e);
	printf("Последняя цифра %d, первая - %d, сумма цифра %d", t, h, sum);
	printf("\n%d%d%d\n", t, e, h);

}