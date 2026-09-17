n = int(input())
d = [[],[],[]]
res=-1
cnt = [0, 0, 0]
winsum = [0, 0, 0]
lose = [[]for _ in range(3)]
enemy = ((1, 2), (0, 2), (0, 1))#第j国的敌人
for i in range(3):
    d[i]=list(map(int, input().split()))
for i in range(n):# 第i次事件
    for j in range(3):# 第j国的视角
        s = d[j][i]-d[enemy[j][0]][i]-d[enemy[j][1]][i]
        if s >= 0:
            winsum[j] += s
            cnt[j] += 1
        else:
            lose[j].append(s)
# print(winsum)
# print(cnt)
# print(lose)
for i in range(3):
    if winsum[i]==0:
        continue
    lose[i].sort(reverse=True)
    for s in lose[i]:
        winsum[i]+=s
        if winsum[i]<=0:
            res=max(res,cnt[i])
            break
        cnt[i]+=1
    if winsum[i]>0:
        res=max(res,cnt[i])
print(res)
