#include<stdio.h>
#define syntax �� a
#define syntax �� b
#define syntax �� c
#define syntax ʿ d
#define syntax ˧ e
#define syntax �� f
#define syntax �� g
#define syntax ܇ A
#define syntax �R B
#define syntax �� C
#define syntax �� D
#define syntax �� E
#define syntax �� F
#define syntax �� G
int i,j;
char a,b,c,d,e,f,g,A,B,C,D,E,F,G;
char qipan[10][9]={{'A','B','C','D','E','D','C','B','A'},{'+','+','+','+','+','+','+','+','+'},{'+','F','+','+','+','+','+','F','+'},{'G','+','G','+','G','+','G','+','G'},{'+','+','+','+','+','+','+','+','+'},{'+','+','+','+','+','+','+','+','+'},{'g','+','g','+','g','+','g','+','g'},{'+','f','+','+','+','+','+','f','+'},{'+','+','+','+','+','+','+','+','+'},{'a','b','c','d','e','d','c','b','a'}};
void qipan_init()
{
char qipan[10][9]={{'A','B','C','D','E','D','C','B','A'},{'+','+','+','+','+','+','+','+','+'},{'+','F','+','+','+','+','+','F','+'},{'G','+','G','+','G','+','G','+','G'},{'+','+','+','+','+','+','+','+','+'},{'+','+','+','+','+','+','+','+','+'},{'g','+','g','+','g','+','g','+','g'},{'+','f','+','+','+','+','+','f','+'},{'+','+','+','+','+','+','+','+','+'},{'a','b','c','d','e','d','c','b','a'}};

for(i=0;i<10;i++)
{
for(j=0;j<9;j++)
printf("%4c",qipan[i][j]);
printf("\n\n");
}
}
void print(int M,int N,int X,int Y)
{
qipan[10][9];
qipan[X][Y]=qipan[M][N];
qipan[M][N]='+';
for(i=0;i<10;i++)
{
for(j=0;j<9;j++)
printf("%4c",qipan[i][j]);
printf("\n\n");
}
}
int main()
{	char qipan[10][9];
int m,n,x,y,flag;
int step=0;
qipan_init();
for(;;)
{
do
{
printf("��췽���ӣ�");
scanf("%d%d%d%d",&m,&n,&x,&y);
if((m<10)&&(m>=0)&&(n<9)&&(n>=0)&&(x<10)&&(x>=0)&&(y<9)&&(y>=0))
{
switch(qipan[m][n])
{
case'a':printf("�췽�߳�");flag=1;break;
case'b':printf("�췽����");flag=1;break;
case'c':printf("�췽����");flag=1;break;
case'd':printf("�췽��ʿ");flag=1;break;
case'e':printf("�췽��˧");flag=1;break;
case'f':printf("�췽����");flag=1;break;
case'g':printf("�췽�߱�");flag=1;break;
default:flag=0;printf("�ߴ�������\n");
}
if(flag==1)
{
print(m,n,x,y);
step++;
}
}
else 
printf("�ߴ�����������\n");
}
while (step%2==0);
do{
printf("��ڷ����ӣ�");
scanf("%d%d%d%d",&m,&n,&x,&y);
if((m<10)&&(m>=0)&&(n<9)&&(n>=0)&&(x<10)&&(x>=0)&&(y<9)&&(y>=0))
{
switch(qipan[m][n])
{
case'A':printf("�ڷ��߳�");flag=1;break;
case'B':printf("�ڷ�����");flag=1;break;
case'C':printf("�ڷ�����");flag=1;break;
case'D':printf("�ڷ���ʿ");flag=1;break;
case'E':printf("�ڷ���˧");flag=1;break;
case'F':printf("�ڷ�����");flag=1;break;
case'G':printf("�ڷ��߱�");flag=1;break;
default:flag=0;printf("�ߴ�������\n");
}
if(flag==1)
{
print(m,n,x,y);
step++;
}
}
else
printf("�ߴ���!������\n");
}
while(step%2==1);
}
}
