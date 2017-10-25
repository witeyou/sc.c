#include<stdio.h>
#include<stdlib.h>
#define N 4
main()
{
	struct node
	{
		int aa;
		struct node *next;
	}*first,*last,*p;
	int i;
	int aa;
	p=(struct node *)malloc(sizeof(struct node));
	printf("请输入第1个结点的内容：");
	scanf("%d",&aa);
	p->aa=aa;
	p->next=NULL;
	first=last=p;
	for(i=2;i<=N;i++)
	{	
		printf("请输入第%d个结点的内容：",i);
		scanf("%d",&aa);
		p=(struct node *)malloc(sizeof(struct node));
		p->aa=aa;
		p->next=NULL;
		last->next=p;
		last=p;
	}
	p=first;
	
	while(p!=NULL)
	{
	printf("%d",aa);
	p=p->next;
	}

}