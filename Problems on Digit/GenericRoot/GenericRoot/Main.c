#include"Header.h"

int main()
{
	int iNum=0,iRet=0;


	printf("Enter the Number");
	scanf("%d",&iNum);

	iRet=Root(iNum);
	printf("%d \t",iRet);

	return 0;
}