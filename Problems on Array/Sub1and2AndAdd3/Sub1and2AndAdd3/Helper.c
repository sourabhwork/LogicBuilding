#include"Header.h"

void PatternDifference(int Arr[],int iSize)
{
	int iCnt=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((Arr[iCnt]-Arr[iCnt+1])==(Arr[iCnt+2]))
		{
			//printf("%d - %d = %d \t",Arr[iCnt],Arr[iCnt+1],Arr[iCnt+2]);
			Arr[iCnt+2]=Arr[iCnt+2]+Arr[iCnt];
		}
		else
		{
			Arr[iCnt+2]=Arr[iCnt+2]+Arr[iCnt+1];
		}
	}
}