#include"Header.h"

/*void Pattern(int iNum)
{
	int iCnt=0;

	for(iCnt=1;iCnt<=iNum;iCnt++)
	{
		printf("* \t");
	}
}
*/

/*void Pattern(int iNum)
{
	int iCnt=0;

	for(iCnt=1;iCnt<=iNum;iCnt++)
	{
		printf("%d \t",iCnt);
	}
}
*/
/*
void Pattern(int iNum)
{
	int iCnt=0,X=1;

	for(iCnt=1;iCnt<=iNum;iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("*");
		}
		else
		{
			printf("%d",X);
			X++;
		}
	}


}
*/

/*void Pattern(int iNo)
{
	int iCnt=0,X=1;

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(X==5)
		{
			X=1;
		}
		printf("%d \t",X);
		X++;
	}
}
*/
/*
void Pattern(int iNum)
{
	int iCnt=0,X=1;

	for(iCnt=1;iCnt<=iNum;iCnt++)
	{
		//X=X*2;
		printf("%d \t",X);
		X=X*2;
	}
}
*/

void Pattern(int iNum)
{
	int iCnt=0;

	for(iCnt=1;iCnt<=iNum;iCnt++)
	{
		if(iCnt%3==0)
		{
			printf("* \t");
		}
		else
		{
			printf("%d \t",iCnt);
		}
	}
}