#include<stdio.h>
main()
{
	int a=0,s=0,n,m=0,x,y;
	printf("����������n��ֵ��");
	scanf("%d",&n);
	for(y=1;y<=n;y++)
	{	
		m++;
		for(x=1,a=0;x<=m;x++)
		{a+=x;}
		s+=a;
	}
	printf("����Ľ���ǣ�%d \n",s);
}