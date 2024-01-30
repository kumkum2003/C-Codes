#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int i,j;
int a[5][5];

for(i=0;i<5;i++)
{
for(j=5;j>i;j--)
{
cout<<" ";
}
for(j=0;j<=i;j++)
{
if(j==0||j==i)
{
a[i][j]=1;
}
else
{
a[i][j]=a[i-1][j-1]+a[i-1][j];
}
cout<<a[i][j]<<" ";
}
cout<<endl;
}
getch();
}