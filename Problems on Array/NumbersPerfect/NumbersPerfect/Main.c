#include"Header.h"

int main()
{
	int iCnt=0;
	int Arr[10]={0};

	printf("Enter the EleMents");

	for(iCnt=0;iCnt<10;iCnt++)
	{
		printf("Enter Number %d :",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}

	for(iCnt=0;iCnt<10;iCnt++)
	{
		Perfect(Arr[iCnt]);
	}

	return 0;
}