#include<stdio.h>
main()
{
	int q,w;
	for(q=1;q<=9;q++)
	{	for(w=1;w<=q;w++)
		{
			printf("%d*%d=%d\t",q,w,q*w);
		}
		printf("\n");
	}
}