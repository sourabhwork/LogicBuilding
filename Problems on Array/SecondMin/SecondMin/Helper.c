#include"Header.h"

float SecondMin(float Arr[],int iSize)
{
	int iCnt=0;
	float fMin=Arr[0],f2Min=Arr[0];

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]<fMin)
		{
			fMin=Arr[iCnt];
		}

		if((fMin!=Arr[iCnt])&&(f2Min>Arr[iCnt]))
		{
			f2Min=Arr[iCnt];
		}
	}
	
	return f2Min;
}