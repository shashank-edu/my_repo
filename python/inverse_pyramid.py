def pattern(n):
 k= 2*n-2
 for j in range(n,-1,-1):
     for i in range(k,0,-1):
         print(end=" ") 
     k= k+1
     for j in range(0,j+1):
         print("* ", end="")
     print("\r")

pattern(int(input("enter the line to be printed: ")))
