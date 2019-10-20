#include<stdio.h>

int incr1(int n)			//call by value
{
	n++;
}

int incr2(int *n)			//call by reference i.e address of the variable
{
	*n=*n+1;
}

int main()
{
	int n=10;
	printf("\nValue of n before calling incr1()= %d",n);
	incr1(n);
	printf("\nValue of n after calling incr1()= %d",n);
	incr2(&n);
	printf("\nValue of n after calling incr2()= %d",n);
}
