#include"Header.h"

BOOL IsPrime(int iVal)
{
	int iCnt;

	for(iCnt=2;iCnt<iVal;iCnt++)
	{
		if((iVal%iCnt)==0)
		{
			break;
		}
	}
	if(iCnt==iVal)
	{
		return TRUE;
	}
	else
	{
			return FALSE;
	}
	
}
