#include"Header.h"

int Prime(int Arr[],int iSize)
{
	int iCnt=0,iValue=0,iMax=0;

	for(iValue=0;iValue<iSize;iValue++)
	{
		for(iCnt=2;iCnt<Arr[iValue];iCnt++)
		{
			if((Arr[iValue]%iCnt)==0)
			{
				
				break;
			}
		}
		if((Arr[iValue]==iCnt)&&(iMax<Arr[iValue]))
		{
		//	if(iMax<Arr[iValue])
				{
					iMax=Arr[iValue];
				}
		}
		
	}
		return iMax;
}