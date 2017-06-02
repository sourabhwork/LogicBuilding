#include"Header.h"

BOOL CheckPrime(int iNum)
{
	int iCnt=0;

	for(iCnt=2;iCnt<iNum;iCnt++)
	{
			if((iNum%iCnt)==0)
			{
				break;
			}
	}
	if(iCnt==iNum)
	{
		
		return TRUE;
	}
	
}



void PrintPrime(int iStart,int iEnd)
{
	int iCnt=0;
	BOOL bRes;
	

	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		bRes=CheckPrime(iCnt);
		
		if(bRes==TRUE)
		{
			printf("%d \t",iCnt);
		}
		
	}
}