class Blood:
    def __init__(self,bloodGroup,unitInHand):
        self.bloodGroup=bloodGroup
        self.unitInHand=unitInHand

class BloodBank:
    def __init__(self,bloodList):
        self.bloodList=bloodList
    
    def isBloodAvailable(self,grp,unit):
        for i in self.bloodList:
            if (i.bloodGroup == grp):
                if (i.unitInHand >= unit):
                    return 1
                else :
                    return 0
            else:
                return 0

    def findMinBloodStock(self):
        min=self.bloodList[0].unitInHand
        bloodGroup=[]
        for i in self.bloodList:
            if(min > i.unitInHand):
                min = i.unitInHand
        for i in self.bloodList:
            if (min == i.unitInHand):
                bloodGroup.append(i.bloodGroup)
        return bloodGroup

if __name__ == '__main__' :
    n= int(input())
    bList=[]
    for i in range(n):
        group=input()
        unitInHand=int(input())
        b1=Blood(group,unitInHand)
        bList.append(b1)
    b2=BloodBank(bList)
    g=input()
    u=int(input())
    result1=b2.isBloodAvailable(g,u)
    if ( result1 == 1):
        print("Blood Available")
    else:
        print("Blood not Available")
    result2=b2.findMinBloodStock()
    for i in result2:
        print(i)
