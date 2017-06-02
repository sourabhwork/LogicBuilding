#include"Header.h"

int main()
{
	int iNum=0;
	printf("Enter the number ");
	scanf("%d",&iNum);

	if(iNum<50)
	
		{
		printf("small");
		}
	

	else if(iNum>50 && iNum<100)
		{
		printf("Medium");
		}

	else
	{
		printf("Large");
	}

	return 0;
}


