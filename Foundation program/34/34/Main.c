#include"Header.h"

int main()
{
	int iNum,i;
	BOOL BRes;
	printf("Enter the Number");
	scanf("%d",&iNum);

	BRes=IsPerfect(iNum);

	if(BRes==TRUE)
	{
		printf("No is Perfect");
	}
	else
	{
		printf("No is not perfect");
	}
	
	return 0;
}