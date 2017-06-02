#include"Header.h"

int main()
{
	int iNum1=0,iNum2=0,iNum3=0,iRes; 
	printf("Enter the three number \n");
	scanf("%d %d %d",&iNum1,&iNum2,&iNum3);

	iRes=mult(iNum1,iNum2,iNum3);
	printf("The multiplication of three no is %d ",iRes);

	getch();
	return 0;
}
