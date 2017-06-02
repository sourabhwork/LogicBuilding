#include"Header.h"

void SumDigit(int Arr[],int iSize)
{
	int iCnt=0,iNo=0,digit=0,iSum=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		//printf("%d",Arr[iCnt]);
		iNo=Arr[iCnt];

		while(iNo!=0)
		{
			digit=iNo%10;
			iSum=iSum+digit;
			iNo=iNo/10;
		}
		printf("%d \t",iSum);
		iSum=0;
	}
}
