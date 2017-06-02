#include"Header.h"

void Perfect(int iNum)
{
	
	int iCnt=0,iSum=0;
	//printf("%d \t",iNum);
	

	for(iCnt=1;iCnt<=(iNum/2);iCnt++)
	{
		if((iNum%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	if(iSum==iNum)
	{
		printf(" \n %d is Perfect No",iNum);
	}
}
