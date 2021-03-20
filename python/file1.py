def greet(name):
    print(f"good morning, {name}")
'''
if we import this file to another file and we want several funtion on this 
file runs only when this was run as a name of this file , thus if we run 
this file from other file so those function will not work
'''
print(__name__) 

'''
__name__ means mains if we run this file only and if we run 
this file from another file thus __name__ becomes name of the file which contain mains
'''

if __name__ == "__main__":  
    n= input("enter a name\n")
    greet(n)