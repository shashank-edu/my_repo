# method 1 -> basic itteration (my way)
'''
def getmin_max(arr):
    max_1=0
    min_1=arr[0]
    for i in arr:
        if i > max_1:
            max_1=i
        if i<min_1:
            min_1=i
    return max_1,min_1

if __name__ == "__main__":
    arr=[1000,11,445,1,330,3000,3242]
    max_1,min_1=getmin_max(arr)
    print(f"min element is {min_1}")
    print(f"max element is {max_1}")
'''

# method 2 -> simple linear search

'''

class MinMax():
    def __init__(self):
        self.max=0
        self.min=0

def getMaxMin(arr):
    max_min=MinMax()
    if len(arr) == 1:
        max_min.max=arr[0]
        max_min.min=arr[0]
        return max_min
    else:
        if arr[0]>=arr[1]:
            max_min.min=arr[1]
            max_min.max=arr[0]
        else:
        # if arr[1]>arr[0]:
            max_min.min=arr[0]
            max_min.max=arr[1]

        for i in range(2,len(arr)):
            if arr[i] > max_min.max:
                max_min.max=arr[i]
            elif arr[i]< max_min.min:
                max_min.min=arr[i]
    return max_min


if __name__ == "__main__":
    arr=[1000,11,445,1,330,3000,3242,324234]
    max_min=getMaxMin(arr)
    print(f"max value is {max_min.max}")
    print(f"min value is {max_min.min}")
'''
# method 3 -> (Tournament Method)

# Python program of above implementation
'''

def getMinMax(low, high, arr):
    arr_max = arr[low]
    arr_min = arr[low]

    # If there is only one element
    if low == high:
        arr_max = arr[low]
        arr_min = arr[low]
        return (arr_max, arr_min)

        # If there is only two element
    elif high == low + 1:
        if arr[low] > arr[high]:
            arr_max = arr[low]
            arr_min = arr[high]
        else:
            arr_max = arr[high]
            arr_min = arr[low]
        return (arr_max, arr_min)
    else:

        # If there are more than 2 elements
        mid = int((low + high) / 2)
        arr_max1, arr_min1 = getMinMax(low, mid, arr)
        arr_max2, arr_min2 = getMinMax(mid + 1, high, arr)

    return (max(arr_max1, arr_max2), min(arr_min1, arr_min2))


# Driver code
arr = [1000, 11, 445, 1, 330, 3000]
high = len(arr) - 1
low = 0
arr_max, arr_min = getMinMax(low, high, arr)
print('Minimum element is ', arr_min)
print('nMaximum element is ', arr_max)
'''

# METHOD 3 (Compare in Pairs) 

def getMaxMin(arr):
    n=len(arr)
    low=0
    high=0
    if n%2 != 0:
        low= arr[0]
        high=arr[0]
    else:
        if arr[0]>arr[1]:
            low=arr[1]
            high=arr[0]
        else:
            low=arr[0]
            high=arr[1]
    i=1
    while i<n-1:
        if arr[i]<arr[i+1]:
            high=max(high,arr[i+1])
            low=min(low,arr[i])
        elif arr[i]>arr[i+1]:
            high=max(high,arr[i])
            low=min(low,arr[i+1])
        i+=1
    return high, low



if __name__ == "__main__":
    arr=[1000,11,445,132,330,3000,3242,324234,122132121313]
    high,low=getMaxMin(arr)
    print(f"max value is {high}")
    print(f"min value is {low}")
