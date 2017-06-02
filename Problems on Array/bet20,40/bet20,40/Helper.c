#include"Header.h"

void Bet2040(int *ptr,int iSize)
{
	int iCnt=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((*ptr>20)&&(*ptr<40))
		{
			printf("%d \t",*ptr);
		}
		ptr++;
	}
}