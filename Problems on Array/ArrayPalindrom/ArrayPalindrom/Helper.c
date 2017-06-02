#include"Header.h"

BOOL CheckPalindrome(int Arr[],int iSize)
{
	int iCnt=0,iCnt1=0;

	for(iCnt=0,iCnt1=(iSize-1);iCnt<(iSize/2),iCnt1>=(iSize/2);iCnt++,iCnt1--)
	{
		if(Arr[iCnt]==Arr[iCnt1])
		{
			return TRUE;
		//printf("%d \t",Arr[iCnt]);
		//printf("%d \t",Arr[iCnt1]);
		}
		else
		{
			return FALSE;
		}
	}
}