#include<stdio.h>
int main(){
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	if (num%2==0)
	{
		printf("\nNumber is even");
	}
	else
		printf("Number is odd");
	return 0;
}