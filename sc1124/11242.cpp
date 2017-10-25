#include<stdio.h>
int tj (int z,int x,int c)
{int v;v=z*x*c;return v;}
main()
{
	int a,s,d,q;
	printf("请输入长方体的长宽高：");
	scanf("%d%d%d",&a,&s,&d);
	q=tj(a,s,d);
	printf("长方体的体积为：%d\n",q);
}
