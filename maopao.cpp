#include<stdio.h>
#define N 10
main()
{
	int i,j,t;
	int a[N]={7,3,2,5,9,1,6,10,4,8};
	for(i=0;i<N-1;i++)
		for(j=0;j<N-i;j++)
		{	if(a[j+1]>a[j])
			{	t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	for (i=0;i<N;i++)
		printf("%d>>",a[i]);
}

