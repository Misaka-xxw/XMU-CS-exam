import sys
data = sys.stdin.buffer.read().split()
it=iter(data)
n=int(next(it))
q=int(next(it))
pre=[0]*(n+1)
for i in range(n):
    pre[i+1]=pre[i]+int(next(it))
for t in range(q):
    l=int(next(it))
    r=int(next(it))
    print(pre[r]-pre[l-1])
