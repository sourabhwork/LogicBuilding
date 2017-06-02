#include"Header.h"

int main()
{
	int iLength=0,i=0;
	int *ptr=NULL;

	printf("Enter the No of Elements");
	scanf("%d",&iLength);

	ptr=(int*)malloc(iLength*sizeof(int));

	printf("Enter the elements");

	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}

	ArrayPattern(ptr,iLength);

	return 0;
}