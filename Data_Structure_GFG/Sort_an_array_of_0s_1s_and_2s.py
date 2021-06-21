# good concept 


def sort012(arr):
    high= len(arr)-1
    low=0
    mid=0
    while (mid<=high):
        if arr[mid]==0:
            arr[low],arr[mid]=arr[mid],arr[low]
            mid+=1
            low+=1
        elif arr[mid]==1:
            mid+=1
        else:
                arr[high],arr[mid]=arr[mid],arr[high]
                # mid+=1
                high-=1    
    return arr


if __name__ == "__main__":
    arr=[0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
    sort_arr=sort012(arr)
    print(arr)

'''
Complexity Analysis: 
Time Complexity: O(n). 
Only one traversal of the array is needed.
Space Complexity: O(1). 
No extra space is required.
'''