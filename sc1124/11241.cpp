#include<stdio.h>
int bd (int x)
{
	int q=1,i;/*q=1为素数。2为合数*/
	for (i=2;i<x;i++)
		if(x%i==0)
		{q=2;break;}
	return q;
}
main()
{
	int a;
	printf("请输入要判断的自然数：");
	scanf("%d",&a);
	a=bd(a);
	if(a==1)
		printf("你输入的数是素数\n");
	else 
		printf("你输入的数不是素数\n");
}



