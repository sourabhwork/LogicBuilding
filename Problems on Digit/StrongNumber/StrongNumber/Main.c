#include"Header.h"

int main()
{
	int iNo=0;
	BOOL bRet=FALSE;

	printf("Enter the No");
	scanf("%d",&iNo);

	bRet=IsStrong(iNo);

	if(bRet==TRUE)
	{
		printf("It is Strong no");
	}
	else
	{
		printf("It is not strong no");
	}

}


