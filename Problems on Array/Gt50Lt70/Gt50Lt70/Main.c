#include"Header.h"

int main()
{
	int iCnt=0,iLength;
	int *Arr=NULL;

	printf("Enter No of elements");
	scanf("%d",&iLength);

	Arr=(int*)malloc(iLength*sizeof(int*));

	printf("Enter Elements:");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf(" \n Enter Number %d :",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}

	//iRet=SumArrEven(Arr,iLength);
	Gt50Lt70(Arr,iLength);

	return 0;
}

