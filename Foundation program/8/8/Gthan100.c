#include "Header.h"
int main()
{
	int iNum;
	BOOL iRes=0;
	printf("Enter the number \t");
	scanf("%d",&iNum);

	iRes=IsGt(iNum);

	if(iRes==TRUE)
	{
	printf("Greter");
	}
	else
	{
	printf("lesser");
	}
	


	return 0;

}