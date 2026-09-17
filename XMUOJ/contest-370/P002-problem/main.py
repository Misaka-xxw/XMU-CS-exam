# 一秒钟限时，包超时的，请用其它编程语言。
import sys
data=sys.stdin.buffer.read().split()
outputs=[]
it=iter(data)
n=int(next(it))
m=int(next(it))
q=int(next(it))
pre=[[0]*(m+1)for _ in range(n+1)]

for i in range(n):
    for j in range(m):
        pre[i+1][j+1]=pre[i+1][j]+pre[i][j+1]+int(next(it))-pre[i][j]
for t in range(q):
    x1=int(next(it))-1
    y1=int(next(it))-1
    x2=int(next(it))
    y2=int(next(it))
    outputs.append(str(pre[x2][y2]-pre[x1][y2]-pre[x2][y1]+pre[x1][y1]))
sys.stdout.write('\n'.join(outputs))
 
"""
3 4 3
1 7 2 4
3 6 2 8
2 1 2 3
1 1 2 2
2 1 3 4
1 3 3 4
"""