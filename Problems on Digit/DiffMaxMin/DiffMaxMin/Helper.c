#include"Header.h"

int DiffMaxMin(int iNo)
{
	int digit=0,iMax=0,iMin=9;

	while(iNo!=0)
	{
		digit=iNo%10;

		if(digit>iMax)
		{
			iMax=digit;
		}
		else if(digit<iMin)
		{
			iMin=digit;
		}

		iNo=iNo/10;
	}

	return iMax-iMin;
}

