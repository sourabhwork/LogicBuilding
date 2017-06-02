#include"Header.h"

void DivisibleNoLarge(int iNo1,int iNo2)
{
	int iCnt=0,iCnt1=0,iMax=0;

	for(iCnt=1,iCnt1=1;iCnt<iNo1,iCnt1<iNo2;iCnt++,iCnt1++)
	{
		if((iNo1%iCnt==0)&&(iNo2%iCnt1==0))
		{

			iMax=iCnt;
		}
	}
	printf("Maximum of Common factor is %d",iMax);
	
}