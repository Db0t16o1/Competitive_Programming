import sys
ll = sys.stdin.readline().strip().split()
n = int(ll[0])
q = int(ll[1])
l = int(ll[2])
r = int(ll[3])
numbers = []
for x in range(n):
	numbers.append(0)
li = []
for i in range(q):
	a = [int(i) for i in sys.stdin.readline().strip().split()]
	if a[0] == 1:
		numbers[a[1]-1] = a[2]
	else:
		for i in range(n):
			if numbers[i] >= a[1]:
				maxn = numbers[i]
				while 
numbers.sort()
print(numbers)
		
		
