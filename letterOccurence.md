### TO PRINT THE NUMBER OF OCCURENCE EACH LETTER IN A STRING
```
d={}
for i in range (26):
    d.setdefault(chr(65+i),0)

s=(input("Enter your string:\n")).upper()
for i in s:
    for k,v in d.items():
        if k==i:
            d[k]=v+1
print("#"*35)
print("Letter \t \t Occurence")
print("#"*35)
for key,value in d.items():
    print("{} \t \t {}".format(key,value))
```
