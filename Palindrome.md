```js
l=input()
for i in range((len(l)//2)):
    if(l[i]==l[-1-i]):
        pass
    else:
        print("It is not a palindrome")
        break;
else:
    print("IT is palindrome")
```
