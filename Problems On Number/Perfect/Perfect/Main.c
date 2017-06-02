#include "Header.h"

int main()
{
	int iNo=0;
	BOOL BRes;
	printf("Enter Number ");
	scanf("%d",&iNo);

	BRes=IsPerfect(iNo);

	if(BRes==TRUE)
	{
		printf("Perfect Number");
	}
	else
	{
		printf("Not Perfect Number");
	}




	return 0;
}