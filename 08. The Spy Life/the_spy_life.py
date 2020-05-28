

message = input().split()
solved_msg = ""

forward_msg = message[::-1]

for word in forward_msg:

    forwards_word = word[::-1]
    solved_word = ""

    for sign in forwards_word:

        if sign.isalpha():
            solved_word = solved_word + sign
    
    solved_msg = solved_msg + solved_word + " "
    
print(solved_msg)
