#include"Header.h"

int LargeDigit(int iNo)
{
	int iMax=0,digit=0;

	while((iNo!=0)&&(iMax!=9))
	{
		digit=iNo%10;

		if(digit>iMax)
		{
			iMax=digit;
		}

		iNo=iNo/10;
	}
	return iMax;
}