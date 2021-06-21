#User function Template for python3

class Solution:
    def kthSmallest(self,arr, l, r, k):
        '''
        arr : given array
        l : starting index of the array i.e 0
        r : ending index of the array i.e size-1
        k : find kth smallest element and return using this function
        '''
        # a=arr[0]
        for i in range(r):
            for i in range(1,len(arr)):
                # print(i)
                if arr[i-1] >arr[i]:
                    b=arr[i-1]
                    arr[i-1]=arr[i]
                    arr[i]=b
        print(arr)
        return arr[k-1]
            
            
            

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__': 
    arr=[7,10,4,3,20,15]
    n=len(arr)
    k=3
    ob=Solution()
    print(arr)
    print(ob.kthSmallest(arr, 0, n-1, k))
        
# } Driver Code Ends