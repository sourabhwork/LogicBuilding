#include"Header.h"

int main()
{
	Uint iNo=0;
	int count=0;

	printf("Enter No in Decimal Format");
	scanf("%d",&iNo);

	count=CountOne(iNo);

	printf("Count of One is %d",count);

	return 0;
}
