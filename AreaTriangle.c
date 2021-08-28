#include<stdio.h>

int main()
{
	
	float b,h, ta;
	
	printf("\nEnter the Base:\t");
	scanf("%f", &b);
	
	printf("\nEnter the Height:");
	scanf("%f", &h);
	
	ta=b*h/2; //ta=0.5*b*h;
	
	printf("\nArea of triangle: %f", ta);
	
	return 0;
}
