#include <stdio.h>
#include <locale.h>

double slesh(double r, double y)
{
	return r / (int)y;

}

float drob(float a, float b)
{
	return a - (int)b;
}

void zdn2()
{
	int a = 11, b = 3, x = a / b;
	float y = a / b;
	double z = a / b;
	printf("%d\n", x);
	printf("%f\n", y);
	printf("%lf\n", z);
	printf("%lf\n", slesh(a, b));




}

void main()
{
	setlocale(LC_ALL, "RUS");
	zdn2();
	char c;
	int i;
	float f;
	double d;
	scanf_s("%c", &c);
	scanf_s("%d", &i);
	scanf_s("%g", &f);
	scanf_s("%lg", &d);
	printf(" % c\n", c);
	printf(" % d\n", i);
	printf(" % g\n", f);
	printf(" % lg\n", d);
	printf("%d\n", (int)f);
	printf("%g", drob(f, f));
	printf("\n16-ный код символа: %x\n10-ный код символа: %d", c, c);


}