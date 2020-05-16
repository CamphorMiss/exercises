s = input("请输入一个以换行结束的字符串：")
res = 0
for c in s:
    if c in ['A','E','I','O','U','a','e','i','o','u']:
        res+=1
print("元音字母的个数为：",res)
