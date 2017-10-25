#include<stdio.h>
main()
{
	int a=0,s=0,n,m=0,x,y;
	printf("请输入整数n的值：");
	scanf("%d",&n);
	for(y=1;y<=n;y++)
	{	
		m++;
		for(x=1,a=0;x<=m;x++)
		{a+=x;}
		s+=a;
	}
	printf("计算的结果是：%d \n",s);
}