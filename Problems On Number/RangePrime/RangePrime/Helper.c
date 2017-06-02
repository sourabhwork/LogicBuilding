#include"Header.h"

BOOL IsPrime(int iNum)
{
	int iCnt=0;
	
	for(iCnt=2;iCnt<=(iNum/2);iCnt++)
	{
		if((iNum%iCnt)==0)
		{
			break;
		}
	}

	if(iCnt==(iNum/2)+1)
	{
		
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void PrintPrime(int iStart,int iEnd)
{
	int iCnt=0;
	BOOL Bres;

	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		Bres=IsPrime(iCnt);

		if(Bres==TRUE)
		{
		printf("%d \t",iCnt);
		}


	}
}