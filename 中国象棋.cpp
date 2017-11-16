#include<stdio.h>
#define syntax 车 a
#define syntax 马 b
#define syntax 相 c
#define syntax 士 d
#define syntax 帅 e
#define syntax 炮 f
#define syntax 兵 g
#define syntax 車 A
#define syntax 馬 B
#define syntax 象 C
#define syntax 仕 D
#define syntax 将 E
#define syntax 炮 F
#define syntax 卒 G
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
printf("请红方走子：");
scanf("%d%d%d%d",&m,&n,&x,&y);
if((m<10)&&(m>=0)&&(n<9)&&(n>=0)&&(x<10)&&(x>=0)&&(y<9)&&(y>=0))
{
switch(qipan[m][n])
{
case'a':printf("红方走车");flag=1;break;
case'b':printf("红方走马");flag=1;break;
case'c':printf("红方走相");flag=1;break;
case'd':printf("红方走士");flag=1;break;
case'e':printf("红方走帅");flag=1;break;
case'f':printf("红方走炮");flag=1;break;
case'g':printf("红方走兵");flag=1;break;
default:flag=0;printf("走错子啦！\n");
}
if(flag==1)
{
print(m,n,x,y);
step++;
}
}
else 
printf("走错啦，重新走\n");
}
while (step%2==0);
do{
printf("请黑方走子：");
scanf("%d%d%d%d",&m,&n,&x,&y);
if((m<10)&&(m>=0)&&(n<9)&&(n>=0)&&(x<10)&&(x>=0)&&(y<9)&&(y>=0))
{
switch(qipan[m][n])
{
case'A':printf("黑方走车");flag=1;break;
case'B':printf("黑方走马");flag=1;break;
case'C':printf("黑方走相");flag=1;break;
case'D':printf("黑方走士");flag=1;break;
case'E':printf("黑方走帅");flag=1;break;
case'F':printf("黑方走炮");flag=1;break;
case'G':printf("黑方走兵");flag=1;break;
default:flag=0;printf("走错子啦！\n");
}
if(flag==1)
{
print(m,n,x,y);
step++;
}
}
else
printf("走错啦!重新走\n");
}
while(step%2==1);
}
}
