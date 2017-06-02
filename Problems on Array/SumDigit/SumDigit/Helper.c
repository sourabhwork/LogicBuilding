#include"Header.h"

void PrintSumDigit(int Arr[],int iSize)
{
	int iRes[10]={0};
	int iCnt=0,iSum=0,iN=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		//printf("%d",Arr[iCnt]);
		iRes[iCnt]=AddDigit(Arr[iCnt]);
		printf("%d \t",iRes[iCnt]);
	}
}

int AddDigit(int iNo)
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



	
	
