#include<stdio.h>
main()
{
	char c;
	printf("请输入一个英文字母:");
	scanf("%c",&c);
	if(c>=65&&c<=90)
		c=c+('a'-'A');
	printf("输出的字母是%c\n",c);
}
