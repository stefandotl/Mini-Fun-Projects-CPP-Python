message = input()
message = message + " "

alhpabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 
        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u','v','w','x','y','z']

backwards = alhpabet[::-1]

new_message = []

new_word = str()

end = len(message)

for char in message:
        
        if not char.isspace():
                char = char.lower()
                index = alhpabet.index(char)
                new_char = backwards[index]
                new_word = new_word + new_char
        else:                
                new_message.append(new_word)
                new_word = ""

krypto = str()
for word in new_message:
        if not krypto:
                krypto = word
        else:
                krypto = krypto + " " + word

print(krypto)
        


         

        

