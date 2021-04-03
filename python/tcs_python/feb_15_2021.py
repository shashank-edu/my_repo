class Traveler:
    def __init__(self,name ,countryTo,age,countryFrom):
        self.name=name
        self.countryTo=countryTo
        self.age=age
        self.countryFrom=countryFrom

class TravelAgency:
    def __init__ (self,obj_list):
        self.obj_list=obj_list

    def countTravelersTraveledCountry(self,country_name):
        count =0
        for i in self.obj_list:
            for j in i.countryTo:
                if i.countryTo == country_name:
                    count +=1
        return count

    def getTravelersTraveledMaxCountry(self):
        number =0
        name= []
        for i in self.obj_list:
            if len(i.countryTo) > number:
                name.append(i.name)
        return name[0]

if __name__ == '__main__':
    n= int(input())
    travelerList=[]

    for i in range(n):
        countryTO=[]
        name=input("name of traveller: ")
        count =int(input())
        for j in range(count):
            countryTO.append(input())
        age=int(input("age of person: "))
        countryFrom=input("country from travel: ")
        obj_traveler=Traveler(name,countryTO,age,countryFrom)
        travelerList.append(obj_traveler)

    country_count = input()
    obj_TravelAgency=TravelAgency(travelerList)
    result1=obj_TravelAgency.countTravelersTraveledCountry(country_count)
    result2=obj_TravelAgency.getTravelersTraveledMaxCountry()
    print(result1)
    print(result2)
