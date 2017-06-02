#include"Header.h"

int SumDigit(int iNo)
{
	int digit=0,iSum=0;

	while(iNo!=0)
	{
		digit=iNo%10;
		iSum=iSum+digit;
		iNo=iNo/10;
	}
	return iSum;
}