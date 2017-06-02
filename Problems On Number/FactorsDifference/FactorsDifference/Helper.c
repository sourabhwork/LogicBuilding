#include"Header.h"

int FactorsDiff(int iNo)
{
	int iCnt=0,iSum=0,iAdd=0;

	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
			//printf("%d \t",iCnt);
		}
		else
		{
			iAdd=iAdd+iCnt;
			//printf("%d \t",iCnt);
		}
	}
	printf(" Addition of factor is %d \n",iSum);
	printf("Addition of Non factor is %d \n",iAdd);
	
	return iAdd-iSum;
}