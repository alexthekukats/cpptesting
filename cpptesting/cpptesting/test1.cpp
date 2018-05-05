#include <stdio.h>
#include <string.h>
#include "Header.h"

int main()
{

	struct MyStruct
	{
		int struct1 = 0xf0;
		double struct2 = 0xf0;
		char struct3[16] = "\xf2\xf2\xf2\xf2\xf2\xf2\xf2\xf2";
		bool struct4 = false;
		char sztring5[16];

	}MyStruct;

	int szam = 0x01;
	float szam2 = 0x05;
	double szam3 = 0x06;
	volatile int szam4 = 0x08;
	volatile int szam5 = 0x09;
	static int static_int = 0x07;

	unsigned char sztring[16] = "\x02\x02\x02\x02\x02\x02\x02\x02";
	signed char sztring2[16] = "\x03\x03\x03\x03\x03\x03\x03\x03";
	const char sztring3[16] = "\x04\x04\x04\x04\x04\x04\x04\x04";
	char sztring4[16];

	strcpy(sztring4, sztring3);


	if (szam == szam2)
	{
		puts("asd");
	}
	else
	{
		puts("asd2");
	}

	if (szam4 == szam5)
	{
		puts("asd");
	}
	else
	{
		puts("asd2");
	}


	switch (szam4)
	{
		case 1:
		{
			puts("case 1");
			break;
		}

		case 2:
		{
			puts("case 2");
			break;
		}

		default:
		{
			puts("Default");
			break;
		}
	}

	puts(MyStruct.struct3);

	strcpy(MyStruct.sztring5, sztring3);

	return 0;
}