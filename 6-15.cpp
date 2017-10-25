#include<stdio.h>
int i =1;
int reset()
{
	return(i);
}
int next(int j)
{
	return(j=i++);
}
int last(int j)
{
	static int i=10;
	return(j=i--);
}
int neww(int i)
{
	auto int j =10;
	return(i=j+=i);
}
main()
{
	auto int i,j;
	i=reset();
	for (j=1;j<=2;j++)
	{
		printf("i=%d j=%d\n",i,j);
		printf("next(i)=%d\n",next(i));
		printf("last(i)=%d\n",last(i));
		printf("neww(i+j)=%d\n",neww(i+j));
	}
}
