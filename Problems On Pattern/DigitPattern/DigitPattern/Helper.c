#include"Header.h"

void Pattern(int iNo)
{
	int i=0,j=0,count=0,TEMP=iNo,TEMPCnt=0;
	int *ptr=NULL;

	while(iNo!=0)
	{
		count++;
		iNo=iNo/10;
	}

	ptr=(int*)malloc(count*sizeof(int));

	iNo=TEMP;
	TEMPCnt=count;

	while(iNo!=0)
	{
		ptr[count-1]=iNo%10;
		iNo=iNo/10;
		count--;
	}


	for(i=0;i<TEMPCnt;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",ptr[j]);
		}
		printf("\n");
	}
	free(ptr);
}

