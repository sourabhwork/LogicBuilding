#include"Header.h"

/*void Print(int iNo)
{
	int digit=0,digit1=0,count=0,iMax=0;

		while(iNo!=0)
		{

			digit=iNo%10;

			while(iNo!=0)
			{
				digit1=iNo%10;

				if(digit1==digit)
				{
					count++;
					iMax=digit;
				}
			

				iNo=iNo/10;
			}
			printf("Count of %d is %d",iMax,count);
			//printf("%d count is maximum no of times %d \n",digit,iMax);

			iNo=iNo/10;
		}

}
	//	printf("%d",iN)
	
*/


/*int Print(int iNo)
{
	int digit=0,iSum=0;

	while(iNo!=0)
	{
		digit=iNo%10;
		iSum=iSum+digit;

		iNo=iNo/10;
	}
	return iSum;
	//iNo=iSum;
	//return Print(iNo);
}
*/
/*
void Print(int iNo)
{
	int digit=0,fact=1,iCnt=0,iSum=0;

	while(iNo!=0)
	{
		digit=iNo%10;

		for(iCnt=digit;iCnt>1;iCnt--)
		{
			fact=fact*iCnt;

		}
		//printf("%d \t",fact);
		iSum=iSum+fact;
		fact=1;
		iNo=iNo/10;

	}
	if(iSum==iNo)
	printf("Addition of fact is%d",iSum);

}
*/


