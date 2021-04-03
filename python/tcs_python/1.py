class City:
	def __init__(self, city_id, st_name, city_name, ntests, npositive):
		self.city_id = city_id 
		self.st_name = st_name
		self.city_name = city_name 
		self.ntests = ntests
		self.npositive = npositive 


class PandemicAnalysis:
	def __init__(self, analysis_name, city_list):
		self.analysis_name = analysis_name
		self.city_list = city_list

	def get_StateWithMaxPositiveCases(self):
		max_state = {}
		for city in self.city_list:
			if city.st_name not in max_state.keys():
				max_state[city.st_name] = city.npositive
			else:
				max_state[city.st_name] = max_state[city.st_name] + city.npositive
		sort = [k for k, v in sorted(max_state.items(), key=lambda item: item[1])]
		return sort[-1]

	def get_citiesMoreThanPercentage(self,req_percent):
		req = []
		for city in self.city_list:
			calc_percent = (city.npositive * 100)/city.ntests
			if calc_percent >= req_percent:
				req.append(city)
		return req



if __name__ == "__main__":
	n = int(input())
	cities = []
	for i in range(n):
		city_id = int(input())
		st_name = input()
		city_name = input()
		ntests = int(input())
		npositive = int(input())
		cities.append(City(city_id,st_name,city_name,ntests,npositive))

	pand = PandemicAnalysis("ABC",cities)
	req_percent = int(input())
	max_state = pand.get_StateWithMaxPositiveCases()
	print(max_state)
	cities_percntage = pand.get_citiesMoreThanPercentage(req_percent)
	if len(cities_percntage) > 0:
		for obj in cities_percntage:
			print(obj.st_name,obj.city_name,sep = " ")
	else:
		print("No City recorded with the given percentage")