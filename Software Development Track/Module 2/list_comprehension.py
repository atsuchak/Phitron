numbers = [23, 53, 21, 2, 32, 35]

odd = []
for num in numbers:
    if num%2 == 1 and num%5 == 0:
        odd.append(num)

print(odd)

# same task in single line
odd_nums = [num for num in numbers if num%2 == 1 and num%5 == 0]
print(odd_nums)

# list comprehension for nested loop
player_name = ['abir', 'kabir', 'sabir', 'bobir']

res = [[name, age] for name in player_name for age in numbers]
print(res)