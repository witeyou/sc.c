#include<stdio.h>
main()
{int a=1,b=0,n,sum=0;
printf("please put n\n");
	   scanf("%d",n);
	   for(;a<n+1;a++)
		   b+=a;
	   sum+=b;
	   printf("%d",sum);
}