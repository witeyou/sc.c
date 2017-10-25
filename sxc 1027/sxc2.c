#include<stdio.h>
main()
{
	int a,b,c，
	printf("请输入三个不同整数：");
	scanf("%d%d%d",&a,&b,&c);
	printf("三个数从小到大排列为：");
	if(a>b&&a>c)
		if(b>c)
			printf("%d  %d  %d\n",c,b,a);
		else
			printf("%d  %d  %d\n",b,c,a);

	if(b>a&&b>c)
		if(a>c)
			printf("%d  %d  %d\n",c,a,b);
		else
			printf("%d  %d  %d\n",a,c,b);
	if(c>a&&c>b)
		if(a>b)
			printf("%d  %d  %d\n",b,a,c);
		else
			printf("%d  %d  %d\n",a,b,c);
		
}