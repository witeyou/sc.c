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
{printf("������x��n��ֵ");
scanf("%f%d",&xx,&nn);
printf("���յĽ���ǣ�%f\n",dd(xx,nn));
}
