#include"Header.h"

int main()
{
	int iCnt=0,iLength;
	int *ptr=NULL;

	printf("Enter the No of Elements");
	scanf("%d",&iLength);

	ptr=(int*)malloc(iLength*sizeof(int));

	printf("Enter the Elements");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	PatternDifference(ptr,iLength);

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("%d \t",ptr[iCnt]);
	}

	return 0;
}