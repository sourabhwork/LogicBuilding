#include"Header.h"

int main()
{
	int iNum=0,iRet=0;

	printf("Enter The Number");
	scanf("%d",&iNum);

	iRet=LargeDigit(iNum);
	printf("Max Digit is %d",iRet);

	return 0;
}