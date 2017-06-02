#include"Header.h"

float SecondMax(float Arr[],int iSize)
{
	int iCnt=0;
	float fMax=Arr[0],f2Max=0.0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]>fMax)
		{
			fMax=Arr[iCnt];
			
		}
	
	}

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(fMax!=Arr[iCnt] && Arr[iCnt]>f2Max)
		{
			f2Max=Arr[iCnt];
		}
	}
	return f2Max;
}