 #include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
int a=0;
clrscr();
i=1;
while(a<=9)
{
a++;
for(k=5;k>=i;k--)
{
printf("  ");
}
for(j=1;j<=2*i-1;j++)
{
printf("* ");
}
a<=5?i++:i--;
printf("\n");
}
getch();
}