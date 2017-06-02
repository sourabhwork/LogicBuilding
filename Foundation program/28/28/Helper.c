#include"Header.h"

float Minimum(float Arr[],int iSize)
{	
	int iCnt=0;
	float fMin=Arr[0];

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]<fMin)
		{
			fMin=Arr[iCnt];
		}
	}
	return fMin;
	
}
