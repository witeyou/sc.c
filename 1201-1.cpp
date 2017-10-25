#include<stdio.h>
int z;
int x;
int c;/*z,x,c对应长，宽，高*/
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
	printf("请输入长宽高："); 
	scanf("%d%d%d",&z,&x,&c);
	printf("体积是：%d\n",tj()); 
	printf("正面积是：%d\n",zmj()); 
	printf("侧面积是：%d\n",cmj()); 
	printf("顶面积是：%d\n",dmj()); 
	
}
