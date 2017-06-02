#include<stdio.h>
int main()
{
	int iCnt=0,iSum=0;
	int Arr[10]={0};
	printf("Enter Elements");

	for(iCnt=0;iCnt<10;iCnt++)
	{
		printf("\n Enter Number %d :",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}

	for(iCnt=0;iCnt<10;iCnt++)
	{
		if((Arr[iCnt]>20)&&(Arr[iCnt]<40))
		{
			printf("%d \t",Arr[iCnt]);
		}
	}
	return 0;
}