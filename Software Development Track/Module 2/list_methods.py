numbers = [23, 53, 21, 2, 32, 35]

numbers.append(199)  #add number to the last of the list
print(numbers)

numbers.insert(3, 100)  #add value 100 to the 3rd index
print(numbers)

numbers.remove(32)  #remove number 32 from the list
print(numbers)

#safe way to remove value
if 35 in numbers:
    numbers.remove(35)
    print(numbers)

val = numbers.pop()  #remove last index value
print(val, numbers)

index = numbers.index(53)  #find index of a number
print(index)

#safe way to find index
if 54 in numbers:
    idx = numbers.index(54)
    print(idx)

numbers.sort()  #sort a list
print(numbers)

numbers.reverse()  #reverse a list
print(numbers)