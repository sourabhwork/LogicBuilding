#include"Header.h"
int main()
{
	int iNum=0,iRes=0;

	printf("Enter the Number");
	scanf("%d",&iNum);

	iRes=FactorsDiff(iNum);
	printf("Difference of both Summation %d",iRes);

	return 0;
}

