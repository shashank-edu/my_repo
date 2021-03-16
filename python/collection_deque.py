from collections import deque
a=['s','h','a','s','h','a','n','k']
d=deque(a)
print(d)
d.append('python')
print(d)
d.appendleft('gupta')
print(d)
d.pop()
print(d)
d.popleft()
print(d)
