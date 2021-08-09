```
#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
	static int a;
	if(n>0)
	{
		a=n*fact(n-1);
	}
	else
	{
		return 1;
	}
	return	a;
}
float main() 
{
	int n,r;
	float ncr;
	printf("Enter N: ");
	scanf("%d",&n);
	printf("Enter R: ");
	scanf("%d",&r);
	if(r>0 && r<=n)
	{
		ncr=fact(n)/fact(r)*fact(n-r);
		printf("%f",ncr);
	}
	else
	{
		printf("Invalid Input");
	}
	return 0;
}
```
