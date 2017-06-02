#include"Header.h"

void Prime(int *ptr,int iSize)
{
	int iCnt=0,iValue=0;

	
	for(iValue=0;iValue<iSize;iValue++)
	{
		for(iCnt=2;iCnt<*ptr;iCnt++)
		{
			
			if((*ptr%iCnt)==0)
			{
				break;
			}
		}
		if(*ptr==iCnt)
		{
			printf("%d prime no \t",*ptr);
		}
		ptr++;
	}
}