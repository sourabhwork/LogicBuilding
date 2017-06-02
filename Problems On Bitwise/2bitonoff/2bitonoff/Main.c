#include"Header.h"

int main()
{
	Uint iNo=0;
	BOOL bRet;
	//printf("Enter the No");
	//scanf("%d",iNo);

	bRet=CheckBit(32);

	if(bRet==TRUE)
	{
		printf("Bit is On");
	}
	else
	{
		printf("Bit is Off");
	}

	return 0;
}