#include<stdio.h>
#include <conio.h>
#include<windows.h>
#define play1up 'w'
#define play1down 's'
#define play1left 'a'
#define play1right 'd'
#define play2up 'o'
#define play2down 'l'
#define play2left 'i'
#define play2right 'p'
#define play1lq 'z'
#define play2lq ' '
#define N 20
#define playnext 'q'
#define exit 'e'
int m=1;
int p[N][N];/*��¼�����������*/
char q[N][N];/*��¼���̽������������*/
struct zuobiao
{
int x;
int y;
}weizhi;
void gotoxy(int x, int y) /*�������꺯��*/
{ 
COORD c; 
c.X=x; 
c.Y=y; 
SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c); 
}
void drawqipan()/*��������*/
{
int i,j;
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{ p[i][j]=0;q[i][j]='o';
printf("ʮ"); 
}
printf("\n");
}}
void movegb(char press)/*�����ƶ�*/
{   
switch(press)
{
case play1up:if(weizhi.y>-1)weizhi.y--;if(weizhi.y<0)weizhi.y=19;break;
/*����1��������ƶ�*/
case play1down:if(weizhi.y<20)weizhi.y++;if(weizhi.y>19)weizhi.y=0;break;
/*����1��������ƶ�*/
case play1left:if(weizhi.x>-1)weizhi.x--;if(weizhi.x<0)weizhi.x=19;break;
/*����1��������ƶ�*/
case play1right:if(weizhi.x<20)weizhi.x++;if(weizhi.x>19)weizhi.x=0;break;
/*����1��������ƶ�*/
case play2up:if(weizhi.y>-1)weizhi.y--;if(weizhi.y<0)weizhi.y=19;break;
/*����2��������ƶ�*/
case play2down:if(weizhi.y<20)weizhi.y++;if(weizhi.y>19)weizhi.y=0;break;
/*����2��������ƶ�*/
case play2left:if(weizhi.x>-1)weizhi.x--;if(weizhi.x<0)weizhi.x=19;break;
/*����2��������ƶ�*/
case play2right:if(weizhi.x<20)weizhi.x++;if(weizhi.x>19)weizhi.x=0;break
;/*����2��������ƶ�*/
}
gotoxy(2*weizhi.x,weizhi.y);
}
void luozi(char press)
{
static t=0;/*�������꽻����������ӵ�״̬*/
if(press==play1lq)  
if(t==0&&p[weizhi.x][weizhi.y]==0)
{
    printf("��");gotoxy(2*weizhi.x,weizhi.y);
q[weizhi.x][weizhi.y]=press;
p[weizhi.x][weizhi.y]=1;t=1;
}
if(press==play2lq)
if(t==1&&p[weizhi.x][weizhi.y]==0)
{
    printf("��");gotoxy(2*weizhi.x,weizhi.y);
    q[weizhi.x][weizhi.y]=press;
    p[weizhi.x][weizhi.y]=1;
    t=0;
}}
void judgewin(char press)//�ж���Ӯ
{
int i,count1,count2=0,count3=0;
struct zuobiao p;
for(i=0;i<4;i++)
{
    for(count1=4;count1>=-4;count1--)
    { switch(i)
     {
    case 0:p.x=weizhi.x-count1;p.y=weizhi.y;break;
/*���������ж��Ƿ�������������һֱ����*/
    case 1:p.x=weizhi.x;p.y=weizhi.y+count1;break;
/* ���������ж��Ƿ�������������һֱ����*/
    case 2:p.x=weizhi.x-count1;p.y=weizhi.y+count1;break; 
/* �������������ж��Ƿ�������������һֱ����*/
    case 3:p.x=weizhi.x-count1;p.y=weizhi.y-count1;break; 
/* �������������ж��Ƿ�������������һֱ����*/
     }
    if(p.x>=0&&p.y>=0)
       {
        if(q[p.x][p.y]==play1lq)
        { count2++;count3=0;}
        if(q[p.x][p.y]==play2lq)
        {count3++;count2=0;}
    }
}
    if(count2>=5)
    {gotoxy(20,20);printf("the side of �� wins\n");printf("do you want to play again?\nplease do Q!");break;}
    else count2=0;
   if(count3>=5)
    {gotoxy(20,20);printf("the side of �� wins\n");printf("do you want to play again?\nplease do Q!");break;}
   else count3=0;
}}
void main()  /*������*/
{
char press;
system("COLOR 2f");  /*������ɫ��ǰ����ɫ*/
drawqipan();
gotoxy(0,0);
while(m)
{
press=getch();
movegb(press);
switch(press)
{
case play1lq:
case play2lq:luozi(press);judgewin(press);break;
case playnext:system("cls");drawqipan();gotoxy(0,0);break;
case exit : m=0;break;  
default :break;
}
}
}
