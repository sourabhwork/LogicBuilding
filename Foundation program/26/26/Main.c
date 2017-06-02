#include"Header.h"

int main()
{
		int iCnt=0,iNum=0;

		printf("Accept the Number ");
		scanf("%d",&iNum);


		printf("The range is --\n ");
		for(iCnt=1;iCnt<=5;iCnt++)
		{
			printf("%d \t",iNum*iCnt);
		}

		 
		
		return 0;
}