#include"Header.h"

void DivGt(int *ptr,int iSize)
{
	int iCnt=0;

	for(iCnt=0;iCnt<10;iCnt++)
	{
		if((*ptr%5==0)&&(*ptr>50))
		{
			printf("%d \t",*ptr);
		}
		ptr++;
	}
}