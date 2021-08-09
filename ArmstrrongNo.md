# To check if a no is armstrong or not.
```js
l=int(input())
n=l
s=len(str(l))
res=0
sum=0
while l!=0:
    res=l%10
    sum=sum+res**s
    l=l//10
if sum==n:
    print("It is an Armstrong no")
else:
    print("It is not an Armstrong")
```
# To Generate armstrong no between 1 to N.
```js
N=int(input())
for i in range (1,N+1):
    res=0
    sum=0
    n=i
    s=len(str(i))
    while i!=0:
        res=i%10
        sum=sum+res**s
        i=i//10
    if sum==n:
        print(n,end=" ")
```
