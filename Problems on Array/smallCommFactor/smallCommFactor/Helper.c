#include"Header.h"

void SmallCommFact(int iNo1,int iNo2)
{
	int iCnt=0,iMin=iNo1;

	for(iCnt=2;iCnt<=(iNo1/2),iCnt<=(iNo2/2);iCnt++)
	{
		if((iNo1%iCnt==0)&&(iNo2%iCnt==0))
		{
			printf("%d \t",iCnt);
			if(iMin>iCnt)
			{
			//iMin=iCnt;
			break;
			//printf("%d \t",iMin);
			}
		}
	}
	if((iCnt=(iNo1/2)+1)||(iCnt=(iNo2/2)+1))
	{
		printf("Small Common Factor is 1");
	}
	else
	{
		printf("small common factor is %d",iCnt);
	}

}