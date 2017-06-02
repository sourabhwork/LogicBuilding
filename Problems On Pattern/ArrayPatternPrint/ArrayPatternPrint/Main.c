#include"Header.h"

int main()
{
	int i=0,iLength=0;
	int *ptr=NULL;

	printf("Enter the No of Elelmnts");
	scanf("%d",&iLength);

	ptr=(int*)malloc(iLength*sizeof(int));

	printf("enter the no");

	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}

	ArrayPattern(ptr,iLength);

	return 0;
}