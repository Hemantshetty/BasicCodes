```
def substring(s,f):
    i=s.find(f)
    return i

s=input("Enter the string:")
f=input("Enter the sub-String:")
og=s
if s.find(f)!=-1:
    while s.count(f)!=0: 
        index=substring(s,f)
        if index !=-1:
            print(len(og)-(len(s)-index))
            count=s.count(f,index+len(f),len(s))
            s=s[index+len(f):len(s)]
else:
    print("substring not found")
```
