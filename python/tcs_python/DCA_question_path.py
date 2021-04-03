def fun():
    lst=[]
    n=int(input())
    if n < 2:
        print("Invalid Input")
        return 0
    else :
        for i in range(0,n):
            number=int(input())
            lst.append(number)
        
        flag =0
        for i in range(n):
            if lst[i] != lst[0]:
                flag +=1
                break
        if flag == 0:
            print("Equal")
            return 0
        
        lst.sort()
        print(lst[0],lst[1])
if __name__ == '__main__':
    fun()
        
        