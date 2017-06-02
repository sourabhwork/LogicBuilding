#include"Header.h"

int main()
{
	int iNum1,iNum2,iRes;
	printf("Enter the two numbers \n ");
	scanf("%d %d",&iNum1,&iNum2);

	iRes=add(iNum1,iNum2);
	printf("addition=%d",iRes);

	getch();
	return 0;
}
