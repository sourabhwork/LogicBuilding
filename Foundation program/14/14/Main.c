#include"Header.h"

int main()
{
	int iNo1=0,iNo2=0,iNo3=0,iRes;
	printf("Enter the three numbers \n");
	scanf("%d %d %d",&iNo1,&iNo2,&iNo3);

	iRes=add(iNo1,iNo2,iNo3);
	printf("Addition of three no is %d",iRes);

	getch();
	return 0;
}
