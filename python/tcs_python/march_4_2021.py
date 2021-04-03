class Person:
    def __init__(self,name,height,weight):
        self.name=name
        self.height=height
        self.weight=weight
    
class Society:
    def __init__(self,personList):
        self.personList=personList

    def findAverageHeight(self):
        sum=0
        count=0
        for i in self.personList:
            sum += i.height
            count +=1
        avg= sum/count
        return avg

    def findTallerThanAveragePerson(self):
        heightList=[]
        avg=self.findAverageHeight()
        for i in self.personList:
            if i.height > avg:
                heightList.append(i.name)
        return heightList

if __name__ == '__main__' :
    count= int(input("no. of person: "))
    personList=[]
    for i in range(count):
        name=input("name of person: ")
        height=int(input("height: "))
        weight=int(input("weight: "))
        person_obj=Person(name,height,weight)
        personList.append(person_obj)
    
    Society_obj=Society(personList)
    avg=Society_obj.findAverageHeight()
    print(f"the avg height is {avg}")

    result2=Society_obj.findTallerThanAveragePerson()
    for i in result2:
        print(i)  #important 
