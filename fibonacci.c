# IN C LANGUAGE
```py
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,a=0,b=1,c,n;
	printf("Enter value of N: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i==0)
		{
			printf("0 ");
		}
		else if(i==1)
		{
			printf("1 ");
		}
		else
		{
			c=a+b;
			printf("%d ",c);
			a=b;
			b=c;
		}
	}
return 0;	
}
```
# IN PYHON LANGUAGE
```js
a,b=0,1
print("{},{},".format(a,b),end="")
count=2
N=50
while(count<=N):
    c=a+b
    print(str(c)+ ",",end="")
    a=b
    b=c
    count+=1
```
