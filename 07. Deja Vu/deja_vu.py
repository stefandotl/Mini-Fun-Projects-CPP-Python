


eingabe = input()

repeated = False

for char in eingabe:
	counter = eingabe.count(char)
	if counter == 2:
		repeated = True
		print('Deja Vu')
		break

if not repeated:
	print('Unique')