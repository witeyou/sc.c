#include<stdio.h>
double dao(int a)
{double n=0.0;
n=1.0/a;
return n;
}
main()
{
double s=0;
int x,i; 
printf("������n��");
scanf("%d",&x);
for(i=1;i<=x;i++)
	s+=dao(i) ;
 printf("���Ϊ��%f",s);
 }
