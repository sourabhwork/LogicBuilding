#include"Header.h"

int main()
{
	int iNum=0;
	BOOL bRet;

	printf("Enter the Number");
	scanf("%d",&iNum);

	bRet=Palindrome(iNum);
	if(bRet==TRUE)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	return 0;
}