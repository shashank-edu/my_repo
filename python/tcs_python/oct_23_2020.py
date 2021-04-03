class Research:
    def __init__(self,id, topic,author, cost,department):
        self.id=id
        self.topic=topic
        self.author=author
        self.cost=cost
        self.department=department

class University:
    def __init__(self,univ_name,res_list):
        self.univ_name=univ_name
        self.res_list=res_list

    def get_maxResearchDepart(self):
        dictnary={}
        count=0
        department= ""
        for i in self.res_list:
            if i.department  not in dictnary.keys():
                dictnary[i.department] = 1
                count =1
            else:
                dictnary[i.department]= dictnary[i.department] +1
            if dictnary[i.department] > count:
                count = dictnary[i.department]
                departament = i.department
        return departament

    def get_researchByTopic(self,topic):
        list_obj =[]
        for i in self.res_list:
            if i.topic == topic:
                list_obj.append(i)
        return list_obj


if __name__ == "__main__":
    list_obj=[]
    n=int(input())
    for i in range(n):
        id =int(input())
        topic=input()
        author=input()
        cost=int(input())
        department=input()
        Research_obj=Research(id,topic,author,cost,department)
        list_obj.append(Research_obj)
    Uni_obj=University("ABC",list_obj)
    topic=input()
    result_1=Uni_obj.get_maxResearchDepart()
    print(result_1)
    result_2=Uni_obj.get_researchByTopic(topic)
    if result_2 == None:
        print("No research on the given topic")
    else:
        for i in result_2:
            print(i.id ,i.cost,i.department,sep =" " )