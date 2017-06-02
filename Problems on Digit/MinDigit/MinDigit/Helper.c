#include"Header.h"

int MinDigit(int iNo)
{
	int digit=0,iMin=9;

	while((iNo!=0)&&(iMin!=0))
	{
		digit=iNo%10;
		
		if(digit<iMin)
		{
			iMin=digit;
		}
		iNo=iNo/10;
	}
	return iMin;
}