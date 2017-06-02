#include"Header.h"

int main()
{

	int iNum=0,iRet=0;

	printf("Enter The Number");
	scanf("%d",&iNum);

	iRet=NoOfDigit(iNum);

	printf("No of Digits in No %d",iRet);

	return 0;
}