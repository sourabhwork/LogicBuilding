#include"Header.h"

	void DivThreeFive(int iFrom,int iTo)
	{
		int iCnt=0;

		for(iCnt=iFrom;iCnt<=iTo;iCnt++)
		{
			if( (iCnt%3==0) && (iCnt%5==0))
			{
				printf("%d \t ",iCnt);
			}
		}
	}