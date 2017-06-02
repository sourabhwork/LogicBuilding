#include"Header.h"

void PrintBinary(UInt iNo)
{
	int digit=0;
	while(iNo!=0)
	{
	//	digit=iNo%2;
		printf("%d ",iNo%2);
		iNo=iNo/2;
	}
}
