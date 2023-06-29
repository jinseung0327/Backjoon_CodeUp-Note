#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char m;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	int n, k, r, l, o, sum = 0;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &n);
		a = a + n;
	}
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &k);
		b = b + k;
	}
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &r);
		c = c + r;
	}
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &l);
		d = d + l;
	}
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &o);
		e = e + o;
	}

	sum = a > b ? a : b;
	sum = sum > c ? sum : c;
	sum = sum > d ? sum : d;
	sum = sum > e ? sum : e;

	if (sum == a)m = '1';
	else if (sum == b)m = '2';
	else if (sum == c)m = '3';
	else if (sum == d)m = '4';
	else if (sum == e)m = '5';

	printf("%c %d", m, sum);
}