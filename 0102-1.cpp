#include<stdio.h>
main()
{	int a,b,t,x,y;
	printf("请输入要比较的两个数：");
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
	 printf("最大公约数为：%d\n最小公倍数为:%d",x,y);
	
}
