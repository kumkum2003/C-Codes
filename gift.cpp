#include<stdio.h>
using namespace std;
int main()
{
	int subject;
	printf("Enter the subject codes you have passed:\n");
	printf(" 1 for maths\n 2 for science\n and 3 for maths+science\n");
	scanf("%d", &subject);
	
	if(subject==1)
	{
		printf("Gift of 15 rs will be given.\n");
	}
	else if(subject==2)
	{
		printf("Gift of 15 rs will be given.\n");
	}
	else if(subject==3)
	{
		printf("Gift of 45 rs will be given.\n");
	}
	else {
		printf("Invalid code.\n");
	}
	return 0;
}
