#include"Header.h"

int main()
{
	int iCnt=0,iLength=0;
	BOOL bRet;
	int *ptr=NULL;

	printf("Enter the No of Elements");
	scanf("%d",&iLength);

	ptr=(int*)malloc(iLength*sizeof(int));

	printf("Enter Data");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	bRet=CheckPalindrome(ptr,iLength);

	if(bRet==TRUE)
	{
		printf("Array is Palindrome");
	}
	else
	{
		printf("Array is not Palindrome");
	}
	return 0;
}


