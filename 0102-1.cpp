#include<stdio.h>
main()
{	int a,b,t,x,y;
	printf("������Ҫ�Ƚϵ���������");
	scanf("%d%d",&a,&b);
	y=a*b; 
	if(a<b)
		{t=a;a=b;b=t;}	
	while(a%b!=0)
	{
	x=a%b;
	a=b;
	b=x;
	if(a<b)
		{t=a;a=b;b=t;}
	 } 
	 x=b;
	 y=y/x;
	 printf("���Լ��Ϊ��%d\n��С������Ϊ:%d",x,y);
	
}
