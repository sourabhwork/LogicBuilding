#include"Header.h"

int main()
{
	int iNum1,iNum2,iRes;
	printf("Enter the two number \t ");
	scanf("%d %d",&iNum1,&iNum2);

	iRes=Difference(iNum1,iNum2);
	
	printf("The Difference between no is %d",iRes);




	getch();
	return 0;
}