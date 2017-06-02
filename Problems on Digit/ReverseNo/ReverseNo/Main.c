#include"Header.h"

int main()
{
	int iNum=0,iRet=0;

	printf("Enter The Number");
	scanf("%d",&iNum);

	iRet=ReverseNo(iNum);


	printf("Reverse No is %d",iRet);

	return 0;
}