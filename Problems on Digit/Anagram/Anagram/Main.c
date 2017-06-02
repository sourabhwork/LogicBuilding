#include"Header.h"

int main()
{
	int iNo1,iNo2;
	BOOL bRet=FALSE;

	printf("Enter the Two No");
	scanf("%d %d",&iNo1,&iNo2);

	bRet=CheckAnagram(iNo1,iNo2);

	if(bRet==TRUE)
	{
		printf("Anagram");
	}
	else
	{
		printf("No");
	}
}

