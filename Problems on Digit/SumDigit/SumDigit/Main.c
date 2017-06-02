#include"Header.h"

int main()
{
	int iNum=0,iRet=0;

	printf("Enter The Number");
	scanf("%d",&iNum);

	iRet=SumDigit(iNum);

	printf("Addition of Digit is %d",iRet);


	return 0;
}
