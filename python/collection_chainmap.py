from collections import ChainMap
a={1:'shashank', 2:'gupta'}
b={'three': 'learning python','four':'from youtube'}

d=ChainMap(a,b)
print(d)

