#include"Header.h"

void Gt50Lt70(int *ptr,int iSize)
{
	int iCnt=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if((*ptr>50)&&(*ptr<70))
		{
			printf("%d \t",*ptr);
		}
		ptr++;
	}
}