#include"Header.h"

BOOL IsArmstrong(int iNo)
{
	int digit=0,iRet=0,iNum=iNo,count=0;

	while(iNo!=0)
	{
		digit=iNo%10;
		count++;
		iNo=iNo/10;
	}
	iRet=AddNo(iNum,count);
	if(iRet==iNum)
	{
		return TRUE;
	}
}

int AddNo(int iNum,int pow)
{
		int iCnt=0,iSum=0,Fact=1,digit1=0;

		while(iNum!=0)
	{
		digit1=iNum%10;
		
		for(iCnt=1;iCnt<=pow;iCnt++)
		{
			Fact=digit1*Fact;
		//	printf("=%d=",Fact);
		}
		//printf("%d",Fact);
		iSum=iSum+Fact;
		Fact=1;
		iNum=iNum/10;
		//printf("-%d-",iSum);
		//return iSum;
	}
	return iSum;
}