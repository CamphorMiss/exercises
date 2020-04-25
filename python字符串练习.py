'''i=str(input("请输入字符串："))
print('%s'%(i[::2]))'''
'''import random

s = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z",
"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]

List1=[]

for i in range(10):
    for i in range(8):
        print (random.choice(s),end="")
List1.append(random.choice(s))
print(List1)'''
'''import re
text ="site sea sue sweet see case sse ssee loses"
print(re.findall(r'\bs\S*?e\b',text))'''
import random
s=["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","0","1","2","3","4","5","6","7","8","9","@","$","#","&","_","~"] #根据要求定义列表元素范围，无要求时也可定义字符串更方便
#方法1：
for i in range(10):
   for i in range(8):
        print(random.choice(s),end="")
        print("")
