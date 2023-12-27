s=""
ans=0
tame=""
try:
    while True:

        s+=input()
        s+="a"

except EOFError:
    pass
for i in s:
    

    if ord(i)>=ord('0') and ord(i)<=ord('9'):
        tame=i+tame
       # print(i)
    elif len(tame)>0:
        ans+=int(tame)
        tame=""
        #print(ans)
if(len(tame)>0):
    ans+=int(tame)

print(ans)