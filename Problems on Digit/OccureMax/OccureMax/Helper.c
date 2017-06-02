#include"Header.h"

void MaxOccure(long int iNo)
{
	int digit=0,digit1=0,iNum=iNo,count=0,Max=1,TEMP=iNo;

	while(iNo!=0)
	{
		digit=iNo%10;
		iNum=TEMP;
		while(iNum!=0)
		{

			digit1=iNum%10;
			if(digit1==digit)
			{
				count++;
				//printf("%d=%d\t",digit,digit1);
				if(count>Max)
				{
				Max=digit;
				}
				
				//printf("%d occure time %d \t",digit,count);
			}
			iNum=iNum/10;
			//printf("%d=%d \t",iNum,digit1);
		}
		count=0;
	printf("\n");

		iNo=iNo/10;
		//printf("%d=%d",iNo,iNum);
	}
	printf("%d occures max no of time",Max);
	
}