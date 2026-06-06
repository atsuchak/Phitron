def sum(num1, num2, num3 = 0):  # default num3 val is 0
    total = num1 + num2 + num3
    return total

total = sum(4, 3)  # take the 3rd value as 0
print('Total(with default value):', total)

total = sum(4, 3, 8)  # initialize the thrid value
print('Total(inilized all value):', total)


# args
def all_sum(num1, num2, *numbers):
    print(numbers)

    sum = 0
    for num in numbers:
        sum += num
    sum += num1 + num2

    return sum

total = all_sum(45, 34, 23, 66)
print('All sum:', total)