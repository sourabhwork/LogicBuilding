#include"Header.h"

int main()
{
	int iNo=0;
	BOOL bRet=FALSE;

	printf("Enter the No");
	scanf("%d",&iNo);

	bRet=IsArmstrong(iNo);

	if(bRet==TRUE)
	{
		printf("It is Armstrong no");
	}
	else
	{
		printf("It is not Armstrong no");
	}

}
