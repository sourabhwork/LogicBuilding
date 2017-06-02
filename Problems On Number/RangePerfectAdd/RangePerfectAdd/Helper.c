#include"Header.h"

BOOL IsPerfect(int iNum)
{
	int iCnt=0,iSum=0;

	for(iCnt=1;iCnt<iNum;iCnt++)
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


int PrintPerfect(int iStart,int iEnd)
{
	int iCnt=0,iSum=0;
	BOOL bRes;

	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		bRes=IsPerfect(iCnt);

		if(bRes==TRUE)
		{
			iSum=iSum+iCnt;
			
		}
	}
		return iSum;
}


