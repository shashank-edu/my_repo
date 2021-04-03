class City:
    def __init__(self,ID,S_name,C_name,tTest,pTest):
        self.cityID=ID
        self.State_name=S_name
        self.City_name=C_name
        self.Total_test=tTest
        self.Positive_test=pTest

class PandemicAnalysis:
    def __init__(self,analysis_name,city_list):
        self.analysis_name=analysis_name
        self.city_list=city_list
        
    def get_StateWithMaxPositiveCase (self):
        count =0
        max_state={} # here we maintaing dictionary
        # max=0
        for i in self.city_list:
            if i.State_name not in max_state.keys(): #here we consider State_name as keys 
                max_state[i.State_name]= i.Positive_test
            else:
                max_state[i.State_name]= max[i.State_name] + i.Positive_test
            sort =  [k for k,v in sorted(max_state.items(), key = lambda item: item[1] )]
            return sort[-1]
            # state = i.State_name
            # if state == i.State_name:
            #     count += i.City_name
            #     continue     
            # if count >= max:
            #     max=count
            #     state = i.State_name
            # return state
    
    def get_citiesMoreThanPercentage(self,integer):
        positive_city_list=[]
        for i in self.city_list:
            percentage = (i.Positive_test * 100)/i.Total_test
            if (percentage >= integer):
                positive_city_list.append(i)  #here we append the object
        return positive_city_list
        # if(len(positive_city_list) == 0):
            # return 'No city recorded with given percentage'


if __name__ == '__main__':
    count = int(input())
    city_list=[]
    for i in range(count):
        ID=int(input())
        state_name=input()
        city_name=input()
        TotalTest=int(input())
        Positive_test=int(input())
        city_obj=City(ID,state_name,city_name,TotalTest,Positive_test)
        city_list.append(city_obj)
    
    pan_obj=PandemicAnalysis("shashank", city_list)
    interger = int(input())
    result1=pan_obj.get_citiesMoreThanPercentage(interger)
    result2=pan_obj.get_StateWithMaxPositiveCase()
    print(result2)
    if len(result1) > 0:
        for obj in result1:
            print(obj.State_name, obj.City_name, sep= " " ) # here we use separate keyword "sep= " " to provide space b/w them"
    else:
        print('No City recorded with the given percentage')
    # print(result1)
    