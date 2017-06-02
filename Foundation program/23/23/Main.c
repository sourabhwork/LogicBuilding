#include"Header.h"

int main()
{	
		int iNum,i;

		printf("Enter no you want?");
		scanf("%d",&iNum);

		for(i=-iNum;i<=iNum;i++)
		{
			printf("%d \t",i);
		}

		getch();
		return 0;
}