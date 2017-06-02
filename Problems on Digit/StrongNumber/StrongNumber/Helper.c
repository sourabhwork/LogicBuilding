#include"Header.h"

BOOL IsStrong(int iNo)
{
	int digit=0,fact=1,iCnt=0,iSum=0,Temp=iNo;
	while(iNo!=0)
	{
	
		digit=iNo%10;

			for(iCnt=digit;iCnt>1;iCnt--)
			{
				fact=fact*iCnt;
			}
		//printf("%d \t",fact);
		iSum=iSum+fact;
		fact=1;
		iNo=iNo/10;

	}
	//printf("%d-%d",iN,iSum);
	if(iSum==Temp)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}