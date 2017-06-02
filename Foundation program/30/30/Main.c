#include"Header.h"
int main()
{
	int iCnt=0,iLength=0;
	float *ptr=NULL;
	float fRet=0.0;

	printf("Enter no of element");
	scanf("%d",&iLength);

	ptr=(float*)malloc(iLength*sizeof(float));

	printf("Enter data");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%f",&ptr[iCnt]);
	}

	fRet=SecondMin(ptr,iLength);
	printf("Second Minimum no is %f",fRet);

	return 0;
}
