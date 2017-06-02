#include <stdio.h>

int main()
{
	int iNo=0;
	char ch;

	printf("Enter number & character ");
	scanf("%d %ch",&iNo,&ch);

	printf("The number is %d and Character is %c ",iNo,ch);
	
	return 0;
}