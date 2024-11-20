#include <stdio.h>

int main(int argc, const char *argv[])
{
	float a = 3.3;
	double b = 0.2839748397384798;
	long double c = 3.147587594784579847587489584598745745874895789457897458748598475874589758748957894578745987;

	char d = 0;
	unsigned char e = 2;
	short f = -1000;
	unsigned char g = 4567;
	long h = -3245678;
	unsigned long i = 567890;

	int j = 5678;
	unsigned int k = 4567;

	__uint8_t l = 56;
	l = 0;

	printf("l = %d\n", l);
	l = 42;
	printf("l = %d en base 10\n", l);
	l = 0b00101010;
	printf("l = %d en base 2\n", l);
	l = 052;
	printf("l = %d en base 8\n", l);
	l = 0x2A;
	printf("l = %d en base 16\n", l);

	l = 257;
	printf("l = %d \n", l);
	return 0;
}