#include"Header.h"

BOOL IsPrime(int iVal)
{
	int iCnt=0;

	for(iCnt=2;iCnt<iVal;iCnt++)
	{
		if((iVal%iCnt)!=0)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
}