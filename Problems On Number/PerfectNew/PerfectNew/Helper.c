#include"Header.h"

void Perfect(int iFrom,int iTo)
{
	int iCnt=0,iValue=0,iSum=0,iAdd=0;

	for(iValue=iFrom;iValue<=iTo;iValue++)
	{
		for(iCnt=1;iCnt<iValue;iCnt++)
		{
			if((iValue%iCnt)==0)
			{
				iSum=iSum+iCnt;
			}
		}
		if(iSum==iValue)
		{
			iAdd=iAdd+iValue;
			//printf(" %d is perfect no in range \n",iValue);
		}
		iSum=0;
	}
		printf("Addition Of Perfect No is %d",iAdd);

		
		
	
}