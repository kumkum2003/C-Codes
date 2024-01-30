#include<stdio.h>
using namespace std;
int main()
{
	int n,m;
	printf("Enter the n :");
	scanf("%d", &n);
	 printf("The table is: \n");
	for(int i=1;i<=10;i++)
	{
	 m=i*n;
	
	 printf("%d\n", m);	
	}
	return 0;
}
