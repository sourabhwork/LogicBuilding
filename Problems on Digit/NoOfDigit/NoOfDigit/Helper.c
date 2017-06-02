#include"Header.h"

int NoOfDigit(int iNo)
{
	int count=0;

	while(iNo!=0)
	{
		count++;
		iNo=iNo/10;
	}
	return count;
}