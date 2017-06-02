#include"Header.h"

int Root(int iNo)
{
	int digit=0,iSum=0;
	while(1)
	{
		iSum=0;
		while(iNo!=0)
		{
			digit=iNo%10;
			iSum=iSum+digit;

			iNo=iNo/10;
		}
		if(iSum>9)
		{
			iNo=iSum;
		}
		else
		{
			break;
		}
	}
	return iSum;


}