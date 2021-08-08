```js
l=int(input())
flag=0

for i in range(2,l//2+1):
    if(l%i==0):
        flag=1
        break;
if(flag==1):
    print("IT is prime")
else:
    print("IT is not prime")

```
