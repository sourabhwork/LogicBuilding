#include"Header.h"

int main()
{
	int	iNum=0,iPow=0;


	printf("Enter a Number ");
	scanf("%d",&iNum);

	printf("Enter the power ");
	scanf("%d",&iPow);

	iPow=Power(iNum,iPow);

	printf(" power of No is %d",iPow);



		
	return 0;
}