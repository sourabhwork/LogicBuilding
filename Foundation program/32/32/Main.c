#include"Header.h"
int main()
{

	float pers;

	printf("Enter the percentage  ");
	scanf("%f",&pers);

	if(pers>70)
	{
		printf("Distinction");
	}
	else if(pers<70 && pers>60)
	{
		printf("First class");
	}
	else if(pers>50 && pers<60)
	{
		printf("Second class");
	}
	else if(pers>40 && pers<50)
	{
		printf("Pass class");
	}
	else
	{
		printf("Fail");
	}
	
	return 0;
}