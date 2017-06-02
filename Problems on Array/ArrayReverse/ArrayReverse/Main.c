#include"Header.h"

int main()
{

	int iLength,iCnt=0;
	int *ptr=NULL;

	printf("Enter the No of Elements");
	scanf("%d",&iLength);

	ptr=(int*)malloc(iLength*sizeof(int*));

	printf("Enter Data");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	ReverseArr(ptr,iLength);

	return 0;
}
