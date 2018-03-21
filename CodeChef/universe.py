n,m,q = map(int,input().split())
tunnel = []
teleport = []
query = []
for i in range(0,n):
	a,b = map(int,input().split())
	tunnel.append((a,b))
for i in range(0,m):
	l = list(map(int,input().split()))
	teleport.append(l)
for i in range (0,q):
	l = list(map(int,input().split()))
	query.append(l)

	
