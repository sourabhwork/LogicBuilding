#include"Header.h"

void PerNum(int *ptr,int iSize)
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
			printf("%d is perfect no ",*ptr);
		}
		iSum=0;
		ptr++;
	}
}