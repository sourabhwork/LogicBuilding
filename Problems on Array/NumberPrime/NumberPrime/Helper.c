#include"Header.h"

void Prime(int iNum)
{
	int iCnt=0;
	//printf("%d\t",iNum);

	for(iCnt=2;iCnt<=(iNum/2);iCnt++)
	{
		if((iNum%iCnt)==0)
		{
			break;
		}
	}

		if(iCnt==(iNum/2)+1)
		{
			printf("%d \t",iNum);
		}
	
}