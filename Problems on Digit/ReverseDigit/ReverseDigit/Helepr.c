#include"Header.h"

void ReverseDigit(int iNo)
{
	int iCnt=0,digit=0;

	while(iNo!=0)
	{
		digit=iNo%10;
		printf("%d",digit);
		iNo=iNo/10;
	}
}