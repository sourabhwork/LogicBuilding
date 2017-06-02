#include"Header.h"

void ArrPrfct(int *ptr,int iSize)
{
	int iCnt=0,iValue=0,iSum=0;

	for(iValue=0;iValue<iSize;iValue++)
	{
		for(iCnt=1;iCnt<*ptr;iCnt++)
		{
			if((*ptr%iCnt)==0)
			{
				iSum=iSum+iCnt;
			}
		}
		if(iSum==*ptr)
		{
			printf("%d is perfect no \n",*ptr);
		}
		iSum=0;
		ptr++;
	}
}
