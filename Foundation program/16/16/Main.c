#include"Header.h"

int main()
{
	int iNum1=0,iNum2=0,iMax; 
	printf("Enter the two number  \n");
	scanf("%d %d",&iNum1,&iNum2);

	iMax=max(iNum1,iNum2);
	printf("The Max is %d",iMax);
	


	return 0;
}
