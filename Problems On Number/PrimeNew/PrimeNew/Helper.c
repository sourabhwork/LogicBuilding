#include"Header.h"

void Prime(int iFrom,int iTo)
{
	int iCnt=0,iValue=0,iSum=0;

	for(iValue=iFrom;iValue<=iTo;iValue++)
	{
		for(iCnt=2;iCnt<=(iValue/2);iCnt++)
		{
			if((iValue%iCnt)==0)
			{
				break;
			}
		}
		if(iCnt==(iValue/2)+1)
		{
			printf("%d \t",iValue);
			iSum=iSum+iValue;
		}
	}
	printf(" \n Prime no Addition is %d",iSum);
}