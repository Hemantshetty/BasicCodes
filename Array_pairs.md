//Generate the pairs of user defined array and find the sum of each pairs
```js
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int i,j,n,s[10][10];
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("(%d,%d) ",a[i],a[j]);
			s[i][j]=a[i]+a[j];
			printf("Sum=%d \n",s[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
```
