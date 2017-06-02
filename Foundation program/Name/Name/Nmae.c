#include <stdio.h>

int main()
{
	char arr[50];
	printf("Enter the name ");
	scanf("%[^'\n']s",arr[]);
	printf("The name is %s",arr);
	
	return 0;
}