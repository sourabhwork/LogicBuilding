#include"Header.h"

	BOOL IsPerfect(int iVal)
	{
		int iCnt=0,sum=0;

		for(iCnt=1;iCnt<iVal;iCnt++)
		{
			if((iVal%iCnt)==0)
			{

				sum=sum+iCnt;
			}

		}
		if(sum==iVal)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
