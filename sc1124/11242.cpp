#include<stdio.h>
int tj (int z,int x,int c)
{int v;v=z*x*c;return v;}
main()
{
	int a,s,d,q;
	printf("�����볤����ĳ���ߣ�");
	scanf("%d%d%d",&a,&s,&d);
	q=tj(a,s,d);
	printf("����������Ϊ��%d\n",q);
}
