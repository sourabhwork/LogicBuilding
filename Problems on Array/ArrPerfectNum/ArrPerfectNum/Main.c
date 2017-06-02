#include"Header.h"

int main()
{
	int iCnt=0,iLength=0;
	int *Arr=NULL;

	printf("Enter No of Elements");
	scanf("%d",&iLength);

	Arr=(int*)malloc(iLength*sizeof(int));


	printf("Enter Elements");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("Enter the NUmber %d : ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}

	ArrPrfct(Arr,iLength);
	return 0;
}