#include"Header.h"

int main()
{
	int iNum=0;
	BOOL BRes;
	
	printf("Enter the number");
	scanf("%d",&iNum);

	BRes=IsPrime(iNum);

	if(BRes==TRUE)
	{
		printf("No is Prime");
	}
	else
	{
		printf("No is not Prime");
	}
	
	return 0;
}