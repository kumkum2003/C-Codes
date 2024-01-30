#include<stdio.h>
int main()
{
    float num=0;
	float c;
	int choices;
	
	printf("enter the value to convert: ");
	scanf("%f", &num);
	printf("type 1 if you wanna convert from kms to miles.\n ");
	printf("type 2 if you wanna convert from inches to foot.\n ");
	printf("type 3 if you wanna convert from cms to inces.\n ");
	printf("type 4 if you wanna convert from pound to kgs.\n ");
	printf("type 5 if you wanna convert inches to meters.\n ");
	scanf ("%d", &choices);
	
	switch (choices)
	{
	case 1:
		c=num/0.621;
		printf("num= %f\n", c);
		break;
	case 2:
		c=num/12;
		printf("num= %f\n", c);
		break;
	case 3:
		c=num/0.394;
		printf("num= %f\n", c);
		break;
    }
		return 0;
}
