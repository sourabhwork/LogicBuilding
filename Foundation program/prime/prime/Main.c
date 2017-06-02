#include "Header.h"

int main()
{
		int iNo=0;
		BOOL BRes;
		printf("Enter number");
		scanf("%d",&iNo);

		BRes=IsPrime(iNo);
		if(BRes==TRUE)
		{
			printf("No is prime");
		}
		else
		{
			printf("No is not prime");
		}
		
		return 0;
}