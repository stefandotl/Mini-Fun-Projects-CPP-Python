# 'Please: enter your password: '
password = input()

special_counter = 0
number_counter = 0
special_characters = ['!', '@', '#', '$', '%', '&', '*']

if len(password) < 7:
    length = False
else:
    length = True

if length:
    for char in password:

        if char in special_characters:
            special_counter = special_counter + 1
        if char.isdigit():
            number_counter = number_counter + 1
    
    if special_counter >= 2 and number_counter >= 2:
        print('Strong')
    else:
        print('Weak')

else:
    print('Weak')
    
