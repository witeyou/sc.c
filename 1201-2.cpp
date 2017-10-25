#include<stdio.h>
int nn;float xx;
float dd(float x,int n)
{	if (n==0)
		return(1);
	else
		if (n==1)
			return(x);
		else
			return((((2*n-1)*x)-dd(x,n-1)-(n-1)*dd(x,n-2))/n);	
}
main()
{printf("请输入x，n的值");
scanf("%f%d",&xx,&nn);
printf("最终的结果是：%f\n",dd(xx,nn));
}
