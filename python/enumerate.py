list =[12,43,5.4,False, "shashank"]

# index =0
# for item in list:
#     print(index " "item)
#     index +=1
    
for index , item in enumerate(list):  #sequence of index item is fixed in this syntax
    print(index, item)  #but here we can inter change it 
    print(item, index) 