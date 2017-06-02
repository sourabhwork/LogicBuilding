#include"Header.h"

void ReverseArr(int Arr[],int iSize)
{
	int iCnt=0;

	for(iCnt=(iSize-1);iCnt>=0;iCnt--)
	{
		printf("%d \t",Arr[iCnt]);
	}

}