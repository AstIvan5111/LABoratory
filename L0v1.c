# include <stdio.h>
#include <locale.h>
main()
{
	long long a ;
	long long b ;
	long long c ;
	long long cb;
	
	setlocale(LC_ALL, "Rus");

	printf("������� 3 �����  ������������� ����� ����� ������:");
	scanf_s("%lld %lld %lld", &a, &b, &c);
	cb = b - c;
	printf("%lld - %lld = %lld", b, c, cb);
}