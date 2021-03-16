import array as arr

emp_detail={'employee':{'dave':{'Id':'001','salary':'2000','position':'team lead'},'ava':{'Id':'002','salary':'5000','position':'project manager'}}}
print(emp_detail)


#converting dictionary to dataframe

import pandas as pd

df= pd.DataFrame(emp_detail['employee'])
print(df)
