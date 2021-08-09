## TO FIND THE SECONG LARGEST NUMBER FROM THE ARRAY
```
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int n,i,large,second;
	printf("Enter the size of array N: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[1];
	second=a[0];
	
	for(i=0;i<n;i++)
	{
		if(	a[i]>large)
		{
			second=large;
			large=a[i];
		}
		else if (a[i]>second && a[i]!=large)
		{
			second=a[i];
		}
	}
	
		printf("Largest no is:%d\nSecond largest no is: %d",large,second);
	return 0;
}
```
