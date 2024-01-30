#include<conio.h>
#include<iostream.h>
void main()
{
int x;
clrscr();
cout<<"Enter the year you wanna check:"<<endl;
cin>>x;

if(((x%4==0)&&(x%100!=0))|| (x%400==0))
{
cout<<"Leap Year"<<endl;

}
else
{
cout<<"Not a leap year."<<endl;
}
getch();
}