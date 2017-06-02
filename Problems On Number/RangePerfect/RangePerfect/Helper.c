#include"Header.h"

BOOL IsPerfect(int iNum)
{
	int iCnt=0,iSum=0;

	for(iCnt=1;iCnt<=(iNum/2);iCnt++)
	{
		if((iNum%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}

	}

	if(iSum==iNum)
	{
		
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


void PrintPerfect(int iFrom,int iTo)
{
	int iCnt=0;
	BOOL bRes=FALSE;
	for(iCnt=iFrom;iCnt<=iTo;iCnt++)
	{
		bRes=IsPerfect(iCnt);

		if(bRes==TRUE)
		{
			printf("%d \t",iCnt);
		}

	}
}

	
	
