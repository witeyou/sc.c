#include<stdio.h>
main()
{
	int x=63,y=0;
	while(y==0)
		{
		if((x+1)%5==0&&(x-1)%8==0)
			y=1;
		else
			x=x+63;
		}
	printf("%d",x);	
}


