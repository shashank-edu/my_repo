vowels='aeiouAEIOU'

string=input()
count =0
for i in vowels:
    for j in string:
        if i==j:
            count+=1

print(count)