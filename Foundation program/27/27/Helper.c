#include"Header.h"

float Maximum(float Arr[],int iSize)
{
	int iCnt=0;
	float fMax=0.0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]>fMax)
		{
			fMax=Arr[iCnt];
		}
	}
	return fMax;
}
