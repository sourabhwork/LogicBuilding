#include"Header.h"

int main()
{
		int iCnt=0,iLength=0;
		float *ptr=NULL;
		float fRet=0.0;

		printf("How many no you want ? ");
		scanf("%d",&iLength);

		ptr=(float*)malloc(iLength*sizeof(float));

		printf("Enter numbers\t");
			for(iCnt=0;iCnt<iLength;iCnt++)
		{
					scanf("%f",&ptr[iCnt]);
					
		}

		fRet=Maximum(ptr,iLength);
		printf("Maximum no is %f",fRet);
		
			
		
		
		return 0;
}