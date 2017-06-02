#include"Header.h"

int main()
{
	Uint iNo=0;
	BOOL bRet;
	printf("Enter the No");
	scanf("%d",&iNo);

	bRet=CheckBit(iNo);

	if(bRet==TRUE)
	{
		printf("Bit is On");
	}
	else
	{
		printf("Bit is Off");
	}
}