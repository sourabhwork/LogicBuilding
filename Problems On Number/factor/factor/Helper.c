#include"Header.h"

void Factors(int iFrom,int iTo)
{
	int iCnt=0,iValue=0;

	for(iValue=iFrom;iValue<=iTo;iValue++)
	{
		printf("Factors of %d is ",iValue);
		for(iCnt=2;iCnt<=iValue;iCnt++)

		{
			if((iValue%iCnt)==0)
			{
				printf("%d ",iCnt);
			}
		}
		printf("\n");
	}
}