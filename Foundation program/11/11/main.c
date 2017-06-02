#include "Header.h"

int main()
{
		int iNum1=0,iNum2=0;
		BOOL BRes;
		printf("Enter the two numbers \n ");
		scanf("%d %d",&iNum1,&iNum2);

		BRes=CheckEql(iNum1,iNum2);

		if(BRes==TRUE)
		{
			printf("Two Numbers are Equal");
		}
		else
		{
			printf("Two Numbers are not equal");
		}

		getch();
		return 0;
}