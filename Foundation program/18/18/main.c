#include"Header.h"

int main()
{
	int iNum1=0,iNum2=0;
	BOOL iRes;
	printf("Enter the two number \n");
	scanf("%d %d",&iNum1,&iNum2);

	iRes=IsDivisible(iNum1,iNum2);

	if(iRes==TRUE)
	{
		printf("Divisible");
	}
	else
	{
		printf("Not Divisible");
	}

	getch();
	return 0;
}
