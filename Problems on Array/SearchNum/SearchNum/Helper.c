#include"Header.h"

void SearchNum(int *ptr,int iSize,int iNo)
{
	int iCnt=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(*ptr==iNo)
		{
			printf("%d is present in Array",iNo);
		}
		ptr++;
	}
}