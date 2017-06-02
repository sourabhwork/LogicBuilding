#include"Header.h"

int main()
{
	int iCnt=0,iLength=0;
	float *ptr=NULL;
	float fRet=0.0;

	printf("Enter No you want? ");
	scanf("%d",&iLength);

	ptr=(float*)malloc(iLength*sizeof(float));

	printf("Enter numbers");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%f",&ptr[iCnt]);
	}
	
	fRet=Minimum(ptr,iLength);
	printf("Minimum no is %f",fRet);
			
		

	return 0;
}