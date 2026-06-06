def full_name(first, middle, last):
    name = f'Full name is: {first} {middle} {last}'
    return name

# Take parameter in order(serial wise)
name = full_name('Ahnaf', 'Tajwar', 'Suchak')
print(name)

# using kargs
def famous_person(first_name, last_name, **addition):
    details = f'{first_name} {last_name}'
    print(addition)  #print all additions
    print(addition['title'])  # print only the title

    for key, value in addition.items():  #print all values from additons one by one
        print(key, value)

    return details

details = famous_person(last_name = 'Hasan', first_name = 'Nurul', title = 'Cricketer', addition = 'Non smoker')
print(details)


# return multiple value from function
def a_lot(num1, num2):
    sum = num1 + num2
    remain = num1 - num2
    mul = num1 * num2

    return sum, remain, mul  # return as tuple
    # return [sum, remain, mul]  # return as list

res = a_lot(4, 3);
print(res)