#include"Header.h"

int Even(int *ptr,int iSize)
{
	int iCnt=0,iSum=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		//printf("%d \t",*ptr);
		if((*ptr%2)==0)
		{
			iSum=iSum+(*ptr);
			
		}
		*ptr++;
	}
	return iSum;
}