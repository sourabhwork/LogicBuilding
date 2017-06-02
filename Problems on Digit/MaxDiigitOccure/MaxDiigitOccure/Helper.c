#include"Header.h"

int MaxDigit(int Arr[],int iLength)
{
	int digit=0,iCnt=0,iMax=0,iNo=0,iMaxD=0;
	int Brr[10]={0};

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iNo=Arr[iCnt];

		while(iNo!=0)
		{
			digit=iNo%10;
			Brr[digit]++;
			iNo=iNo/10;
		}
	}

	for(iCnt=0;iCnt<10;iCnt++)
	{
		if(Brr[iCnt]>iMax)
		{
			iMax=Brr[iCnt];
			iMaxD=iCnt;
		}
	}
	return iMaxD;
}