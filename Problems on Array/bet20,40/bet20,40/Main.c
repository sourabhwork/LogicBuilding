#include"Header.h"

int main()
{
	int iCnt=0;
	int Arr[10]={0};

	printf("Enter Elements");

	for(iCnt=0;iCnt<10;iCnt++)
	{
		printf("Enter number %d :",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}

	Bet2040(Arr,10);

	//printf("Numbers Between 20 and 40 is %d",iRes);


	return 0;
}
