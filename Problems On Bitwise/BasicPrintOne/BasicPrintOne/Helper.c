#include"Header.h"

int CountOne(Uint iNo)
{
	int iCnt=0;

	while(iNo!=0)
	{
		if(iNo%2==1)
		{
			iCnt++;
		}

		iNo=iNo/2;
	}
	return iCnt;
}