#include"Header.h"

int main()
{
	int iValue=0;
	BOOL iRes;
	printf("Enter the  number ");
	scanf("%d",&iValue);

	iRes=CheckEvenOdd(iValue);

	if(iRes==TRUE)
	{
		printf("Enter Number is Even");
	}
	else
	{
		printf("Enter number is odd");
	}

	getch();
	return 0;
}
