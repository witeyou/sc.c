#include<stdio.h>
void printint(int n)
{if (n<0)
	{putchar("-")
	n=-n;
	}
	if (n/10!=0)
		putchar(n/10);
	putchar(n%10+'0');
	
 } 
 main()
 {int k;
 scanf("%d",&k);
 printint (k);
 
 
 }
