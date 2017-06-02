#include"Header.h"

BOOL Palindrome(int iNo)
{
	int digit=0,iRev=0,TEMP=iNo;

	while(iNo!=0)
	{
		digit=iNo%10;
		iRev=iRev*10+digit;

	/*	if(iRev==iNo)
		{
			printf("%d %d",iRev,iNo);
			break;
		}
		*/

		iNo=iNo/10;
	}
	if(TEMP==iRev)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}