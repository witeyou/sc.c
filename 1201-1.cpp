#include<stdio.h>
int z;
int x;
int c;/*z,x,c��Ӧ��������*/
int tj()
{return(z*x*c);
} 
int zmj()
{return(z*c);
} 
int cmj()
{return(x*c);
} 
int dmj()
{return(z*x);
} 
main()
{
	printf("�����볤��ߣ�"); 
	scanf("%d%d%d",&z,&x,&c);
	printf("����ǣ�%d\n",tj()); 
	printf("������ǣ�%d\n",zmj()); 
	printf("������ǣ�%d\n",cmj()); 
	printf("������ǣ�%d\n",dmj()); 
	
}
