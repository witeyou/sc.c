#include<stdio.h>
int bd (int x)
{
	int q=1,i;/*q=1Ϊ������2Ϊ����*/
	for (i=2;i<x;i++)
		if(x%i==0)
		{q=2;break;}
	return q;
}
main()
{
	int a;
	printf("������Ҫ�жϵ���Ȼ����");
	scanf("%d",&a);
	a=bd(a);
	if(a==1)
		printf("���������������\n");
	else 
		printf("�����������������\n");
}



