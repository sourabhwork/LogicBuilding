#include"Header.h"

	int Sum(int iStart,int iEnd)
	{
		int iSum=0,iCnt=0;

		for(iCnt=iStart;iCnt<=iEnd;iCnt++)
		{
			iSum=iSum+iCnt;
		}
		return iSum;
	}