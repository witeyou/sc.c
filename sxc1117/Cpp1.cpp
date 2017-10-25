#include<stdio.h>
main()
{
	int a=1,i=1,n;
	for(n=1;n<=7;n++)
	{
		if(n<=4)
			a=n;
		else
			a=8-n;
		for(i=1;i<=(4-a);i++)
			printf(" ");
		for(i=1;i<=(2*a-1);i++)
			printf("*");
		printf("\n");
	}
}
