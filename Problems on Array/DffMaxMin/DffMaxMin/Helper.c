#include"Header.h"

float Difference(float Arr[],int iSize)
{
	int iCnt=0;
	float fMax=Arr[0],fMin=Arr[0];

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]>fMax)
		{
			fMax=Arr[iCnt];
		
		}
		if(Arr[iCnt]<fMin)
		{
			fMin=Arr[iCnt];
	
		}
	}
	//printf("%f %f",fMax,fMin);
	return fMax-fMin;
}