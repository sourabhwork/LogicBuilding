#include"Header.h"

int Power(int iNo)
{
	int digit=0,iNum=iNo,iRet=0,count=0,iSum=0;

	while(iNo!=0)
	{
		digit=iNo%10;
		count++;

		iRet=NumPow(digit,count);
		iSum=iSum+iRet;
		//printf("%d \t",iSum);
		iNo=iNo/10;
	}
	//printf("%d",iSum);
	return iSum;
}

int NumPow(int digit,int pow)
{
	int iCnt=0,Power=1,iSum=0;
	//printf("%d-%d \n",digit,pow);
	for(iCnt=1;iCnt<=pow;iCnt++)
	{
		Power=Power*digit;
	}
	//iSum=iSum+Power;
	//printf("=%d=",iSum);
	return Power;
}
