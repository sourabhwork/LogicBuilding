#include<stdio.h>
int main()
{
	int iCnt=0,iSum=0;
	int Arr[10]={0};

	printf("Enter Elements");

	for(iCnt=0;iCnt<10;iCnt++)
	{
		printf("\n Enter Numbers %d :",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}

	for(iCnt=0;iCnt<10;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
		//	printf("%d \t",Arr[iCnt]);
			iSum=iSum+Arr[iCnt];
		}
	}
	printf("Addition of Even no is %d",iSum);

	return 0;
}


