#include<stdio.h>
main()
{
	int p,t;
	printf("��������¹�������");
	scanf("%d",&p);
	if(p<0)
		printf("�����������\n");
	t=(p+999)/1000;
	switch(t)
		{case 0:
		case 1:p=500;break;
		case 2:p=500+p*1/100;break;
		case 3:
		case 4:
		case 5:p=500+p*15/100;break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:p=500+p*20/100;break;
		default:p=500+p*25/100;
		}
	printf("����Ա���µĹ���Ϊ��%d \n",p);
}

