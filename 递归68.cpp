#include<stdio.h>
long fib(int n)
{
if (n==1)
	return 1;
else
	if(n==2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
main()
{
long r;
r=fib(5);
printf("fib(5)=%d",r);
}
