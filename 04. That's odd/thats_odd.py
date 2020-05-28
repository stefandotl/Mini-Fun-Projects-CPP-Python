counter = int(input("first number is length, give me your numbers: \n"))

list_numbers = []

for i in range(counter):
    number = int(input())
    list_numbers.append(number)
    print(f"number {number} added")

result = 0
for digit in list_numbers:

    if digit % 2 == 0:
        result = result + digit

print('The result is: ', result)





