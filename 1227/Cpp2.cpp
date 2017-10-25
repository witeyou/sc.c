#include<stdio.h>
#include"struct.H"
struct std_info student[3]=
{
	{"00102","张三","男",{1980,9,20}},
	{"00105","李四","男",{1980,8,15}},
	{"00112","王五","女",{1980,3,10}}
};

main()
{
int i;
for(i=0;i<3;i++)
	{
		printf("%-7s\t",(student+i)->no);
		printf("%-9s\t",(student+i)->name);
		printf("%-4s\t",(student+i)->sex);
		printf("%d-%d-%d\n",(student+i)->birthday.year,(student+i)->birthday.month,(student+i)->birthday.day);
	};	
}
