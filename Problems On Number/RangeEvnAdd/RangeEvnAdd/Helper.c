#include"Header.h"


int AddEven(int iStart,int iEnd)
{
	int iCnt=0,iSum=0;

	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if((iCnt%2)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum; 
}