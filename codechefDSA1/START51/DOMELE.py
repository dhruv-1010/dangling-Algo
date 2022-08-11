# cook your dish here
test = int(input())
for i in range(test):
    n = int(input())
    lis = list(map(int,input().split()))
    dicte = {}
    for i in range(n):
        if lis[i] not in dicte:
            dicte[lis[i]] = 1
        else:
            dicte[lis[i]]+=1
    listnew = []
    for k,v in dicte.items():
        listnew.append(v)
    maximum = max(listnew)
    if listnew.count(maximum)>1:
        print("No")
    else:
        print("Yes")
