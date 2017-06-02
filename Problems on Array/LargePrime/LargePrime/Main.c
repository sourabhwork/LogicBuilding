#include"Header.h"

int main()
{
	int iCnt=0,iLength=0,iRes=0;
	int *ptr=NULL;

	printf("Enter No of Elements");
	scanf("%d",&iLength);

	ptr=(int*)malloc(iLength*sizeof(int));

	printf("Enter Data");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}


	iRes=Prime(ptr,iLength);

	printf("Largest Prime is %d",iRes);

	return 0;
}

