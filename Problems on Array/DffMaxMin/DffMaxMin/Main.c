#include"Header.h"

int main()
{
	int iCnt=0,iLength;
	float fRet=0;
	float *ptr=NULL;

	printf("Enter the No of Elements");
	scanf("%d",&iLength);

	ptr=(float*)malloc(iLength*sizeof(float));

	printf("Enter Data");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%f",&ptr[iCnt]);
	}

	fRet=Difference(ptr,iLength);

	printf("Difference between Max and Min is :%f ",fRet);

	return 0;

}