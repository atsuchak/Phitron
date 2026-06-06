from function import double_it
from kargs_multiple import full_name as name  #import full_name function from kargs_multiple file
from default_args import *  #import all the functions

f_name = name('Ahnaf', 'Tajwar', 'Suchak')
print(f_name)

res = double_it(100)
print(res)