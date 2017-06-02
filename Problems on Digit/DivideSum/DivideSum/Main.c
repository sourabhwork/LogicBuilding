#include"Header.h"

int main()
{
	int iNum=0,iRet=0;

	printf("Enter the digit");
	scanf("%d",&iNum);

	iRet=DivideSum(iNum);

	printf("Sum of divide No is %d",iRet);

	return 0;
}