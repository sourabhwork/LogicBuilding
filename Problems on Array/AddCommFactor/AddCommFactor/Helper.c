#include"Header.h"

void AddCommFact(int iNum1,int iNum2)
{
	int iCnt=0,iCnt1=0,iAdd=0;

	for(iCnt=1,iCnt1=1;iCnt<iNum1,iCnt1<iNum2;iCnt++,iCnt1++)
	{
		if((iNum1%iCnt==0)&&(iNum2%iCnt1==0))
		{
			printf("%d\t",iCnt);
			iAdd=iAdd+iCnt;
		}
	}
	printf("Addition of Common Factor is %d",iAdd);

}