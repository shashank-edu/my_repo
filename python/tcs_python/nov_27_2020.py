''' blood bank-donate blood and save life '''

class Donor:
    def __init__(self,ID,name,contactno,bloodgroup,month,distance):
        self.ID=ID
        self.name=name
        self.contact_no=contactno
        self.bloodgroup=bloodgroup
        self.PrevDonatedMon=month
        self.AwayFrom=distance

class BloodBank:
    def __init__(self,name,listD):
        self.name=name
        self.ListofDonor=listD

    def getListofAvailableDonors(self):
        for i in i.ListofDonor:
            for a,b in i.ListofDonor.items():
                return i.ListofDonor.item.sort()

    def IsAvailable(self,curr_mon):
        for i in i.ListofDonor:
            month= ['jan','feb','mar','apr','may','jun','jul','aug','sep','oct','nov']
            a=0
            while month[a] != i.PrevDonateMon:
                a +=1
            b=0
            while month[b] != curr_mon:
                b +=1
            if (a-b >0 ):
                if (a-b >= 4):
                    if(i.distance <= 50):
                        return True
            elif(a-b<0):
                if(b-a >= 4):
                    if(i.distance <= 50):
                        return True
            else:
                return False
    def getAndUpdateDonor(self,bloodGroup,donorCount):
        if len(ListofDonor) < donorCount:
            pass
            return Available
        elif len(ListofDonor) >= donorCount:
            pass
            
if __name__ =='__main__':

    a= int(input("no. of donors: "))
    obj_donor= Donor()
    for i in range(a):
        donorID=int(input("Donor ID: "))
        donorName=input("donor name: ")
        donorNumber=int(input("contact no: "))
        bloodGroup= input("blood group: ")
        




