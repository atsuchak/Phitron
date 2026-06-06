num = 10

i = 0
while i < num:
    print('Current num: ', num)
    num -= 1

while num < 10:
    num += 1
    if num == 8:
        break
    if num == 5:
        continue
    print(num)
