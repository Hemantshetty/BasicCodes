### To print all the unique vowels from user given string
```
l=input()
s=set()
for words in l:
    if words in ("a","e","i","o","u"):
        s.add(words)
print(s)
```
