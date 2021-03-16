from collections import Counter
a=[1,3,53,2,2,2,45,1,54,1,3,2,45]
print(a)
c=Counter(a)
print(c)

print(list(c.elements()))
print(c.most_common())

sub={2:1,6:1} #substract 2 one times and 6 one times
print(c.subtract(sub))
print(c.most_common())
