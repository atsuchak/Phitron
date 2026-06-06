# take 3 numbers from the users and give me the larrgest number as output
num1 = input('Enter 1st number: ');
num2 = input('Enter 2nd number: ');
num3 = input('Enter 3rd number: ');

if num1 > num2 and num1 > num3:
    print('1st number is largest')
elif num2 > num1 and num2 > num3:
        print('2nd number is largest')
else:
    print('3rd number is largest')


# take 3 numbers from the users and give me the sum of the numbers as output 
print('Sum of 3 numbers: ', int(num1) + int(num2) + int(num3))


# Run a loop and show me the odd numbers between 39 to 68
for num in range(39, 68):
    if num%2 != 0:
        print(num)


#Grade calculator
mark = input('Enter mark: ')

mark = int(mark)
if mark >= 80 and mark <= 100:
    print('Grade: A+')
elif mark >= 70 and mark < 80:
    print('Grade: A')
elif mark >= 60 and mark < 70:
    print('Grade: B+')
elif mark >= 50 and mark < 60:
    print('Grade: B')
elif mark >= 40 and mark < 50:
    print('Grade: C+')
elif mark >= 33 and mark < 40:
    print('Grade: D')
elif mark < 33:
    print('Grade: F')
else:
    print('Invalid mark')