#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
int a;
clrscr();

for(i=5;i>=1;i--)
{
a=i;
for(k=5;k>=i;k--)
{
printf("  ");
}
for(j=1;j<=2*i-1;j++)
{
printf("%d ",a);
j<i?a++:a--;
}
printf("\n");
}

getch();
}