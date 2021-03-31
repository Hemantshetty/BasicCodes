#include <stdio.h>
#include <stdlib.h>
int a=0;
int taylor(int x,int n)
{
	if(n>0)
	{
		a=a+power(x,n)/fact(n);
		taylor(x,n-1);
	}
	else
	{
		a=a+1;
		return a;
	}
}

int b=1;
int power(int x,int n)
{
	if(n>0)
	{
		b=x*(power(x,n-1));
	}
	else
	{
		return 1;
	}
return b;
}

int c=1;
int fact(int n)
{
	if(n>1)
	{
		c=n*(fact(n-1));
	}
	else
	{
		return 1;
	}
return c;
}
int main() 
{
	int x,n;
	printf("Enter the  value of X: ");
	scanf("%d",&x);
	printf("Enter the  value of N: ");
	scanf("%d",&n);
	if(n==0)
	{
		printf("1");
	}
	else
	{
		printf("%d",taylor(x,n));	
	}
	return 0;
}
