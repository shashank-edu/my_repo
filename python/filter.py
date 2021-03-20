# syntax of filter : list(filter(function,list))

def greater_than_5(num):
    if num > 5:
        return True
    else:
        return False


l = [1, 23, 43, 5, 453, 645, 122, 34, 1, 65]
filter_list = list(filter(greater_than_5, l))
# by filter whose value which return 5 will be printed or listed in another variable
print(filter_list)

smaller_than_34= lambda num:num <34
filter_list_2=list(filter(smaller_than_34,l))
print(filter_list_2)

