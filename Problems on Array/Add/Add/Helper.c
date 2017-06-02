#include"Header.h"

int AddEven(int *ptr,int iSize)
{
	int iCnt=0,iSum=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	//	printf("%d",*ptr);
		if((*ptr%2)==0)
		{
			iSum=iSum+*ptr;
		}
		ptr++;
	}
	return iSum;
}

