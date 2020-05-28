

message = input().split()

word = []
pig_sentence = ""

for word in message:

    first_letter = word[0:1]
    pig_word = word[1:] + first_letter + "ay"   
    pig_sentence = pig_sentence + pig_word + " "


print(pig_sentence)

    

    