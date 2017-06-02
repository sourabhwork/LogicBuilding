#include"Header.h"


int main()
{
	int iNum=0,iRet=0;

	printf("Enter The Number");
	scanf("%d",&iNum);

	iRet=MinDigit(iNum);

	printf("Min Digit of Number is %d",iRet);


	return 0;
}