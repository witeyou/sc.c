#include<stdio.h>
main()
{
	char c;
	printf("������һ��Ӣ����ĸ:");
	scanf("%c",&c);
	if(c>=65&&c<=90)
		c=c+('a'-'A');
	printf("�������ĸ��%c\n",c);
}
