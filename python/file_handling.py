# here we create a file or open a file and close it
import os
file= open("demo_file.txt",'w')
file.close()


# here we open a file as a read and print all the text present in that file and then close it
'''
import os
file=open("demo_file.txt",'r')
print(file.read())
file.close()
'''

#here we open a file as a read mode and print the 5 charecters only
'''
import os
file=open("demo_file.txt",'r')
print(file.read(5))
file.close()
'''

# here we read the file lines by lines
'''
import os
file=open("demo_file.txt",'r')
print(file.readlines())
file.close()
'''
import os
file=open("demo_file.txt",'r')
for line in file:
    print(file.read())
file.close()


''' now we will see how to write in the file '''
import os
file=open("demo_file.txt",'w')
file.write("i am learing a python on edureka")
file.close()





