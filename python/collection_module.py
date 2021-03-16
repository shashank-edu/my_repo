from collections import   namedtuple
a=namedtuple('courses','name,technology')
s=a('data scinence ', 'python ')  #tuple
print(s)           

s=a._make(['A.I','python'])  #list
print(s)
