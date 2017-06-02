#include"Header.h"

int ReverseNo(int iNo)
{
	int digit=0,iRev=0;

	while(iNo!=0)
	{
		digit=iNo%10;
		iRev=(iRev*10)+digit;
		iNo=iNo/10;
	}
	return iRev;
}