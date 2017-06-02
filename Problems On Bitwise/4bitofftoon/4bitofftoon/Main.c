#include"Header.h"

int main()
{
	Uint iNo=0;
	Uint iRet;
	printf("Enter the No");
	scanf("%d",&iNo);

	iRet=OnBit(iNo);
	printf("%d",iRet);

	return 0;
}