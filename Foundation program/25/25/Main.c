#include"Header.h"

int main()
{
		int i,iNum=0;

		printf("Enter no you want ? ");
		scanf("%d",&iNum);

		for(i=0;i<=iNum;i++)
		{
				if(i%2==1)
				{
					printf("%d \t",i);
				}
		}

		
		return 0;
}