#include"Header.h"

int main()
{
	int iNum1=0,iNum2=0,iMin;
	printf("Enter the two number \n");
	scanf("%d %d",&iNum1,&iNum2);

	iMin=min(iNum1,iNum2);

	printf("Minimum Number is %d",iMin);

	getch();
	return 0;
}
