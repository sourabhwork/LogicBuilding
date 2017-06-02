#include"Header.h"

int PerfectSmall(int Arr[],int iSize)
{
	int iCnt=0,iSum=0,iValue=0,iMin=Arr[0];

	for(iValue=0;iValue<iSize;iValue++)
	{
		for(iCnt=1;iCnt<Arr[iValue];iCnt++)
		{
			if((Arr[iValue]%iCnt)==0)
			{
				iSum=iSum+iCnt;
			}
		}
		if((Arr[iValue]==iSum)&&(iMin>Arr[iValue]))
		{
			
			
		//	if(iMin>Arr[iValue])
			{
				iMin=Arr[iValue];
			}
		}
		iSum=0;
	}
	return iMin;
}

