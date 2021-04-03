class Container:
    def __init__(self,ID,length,breadth,height,price):
        self.ID=ID
        self.length=length
        self.breadth=breadth
        self.height=height
        self.pricepersqrft=price

    def findVolume(self):
        return self.length*self.breadth*self.height

class PackagingCompany:
    def __init__(self,list):
        self.containerList=list

    def findContainerCost(self,ID):
        for i in self.containerList:
            if i.ID == ID:
                volume=i.findVolume()
                return k*i.pricepersqrft
            else:
                return None
    def findLargestContainer(self):
        dictVolume={}
        for i in self.containerList:
            k=i.findVolume()
            dictVolume[k]=i.ID 
        dictVolumeSorted=sorted(dictVolume.items(), reverse=True)  #important 
        return dictVolumeSorted

if __name__ == '__main__':
    number= int(input("no. of container: "))
    containerList=[]
    for i in range(number):
        id=int(input())
        length=int(input())
        breadth=int(input())
        height=int(input())
        price=int(input())
        c1=Container(id,length,breadth,height,price)
        containerList.append(c1)
    p1= PackagingCompany(containerList)
    inID=int(input())
    result1=p1.findContainerCost(inID)
    result2=p1.findLargestContainer()
    if result1 == None:
        print("no container found")
    else:
        print(f"the cost of container is {result1}")
    print(result2[0][1],result2[0][0])