#include"Header.h"

int main()
{
	int iNum=0,iRet=0;

	printf("Enter The Number");
	scanf("%d",&iNum);

	iRet=DiffMaxMin(iNum);


	printf("Difference of max digit and min digit is %d",iRet);

	return 0;
}