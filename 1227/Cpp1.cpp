#include "struct.H"
#include <stdio.h>
struct std_info student={"102","ÕÅÈý","ÄÐ",{1980,9,20}};
struct std_info *p;

main()
{
	p=&student;
	printf("NO:%s\n",p->no);
	printf("Name:%s\n",p->name);
	printf("sex:%s\n",p->sex);
	printf("Brithday:%d-%d-%d\n",p->birthday.year,p->birthday.month,p->birthday.day);
}