#include<stdio.h>
int main()
{
	int iCnt=0;
	int Arr[10]={0};

	printf("Enter Elemetnts \n");

	for(iCnt=0;iCnt<10;iCnt++)
	{
		printf("Enter Number %d :",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}
	for(iCnt=0;iCnt<10;iCnt++)
	{
		if((Arr[iCnt]%5==0)&&(Arr[iCnt]>50))
		{
			printf("%d \t",Arr[iCnt]);
		}
	}
	return 0;

}
