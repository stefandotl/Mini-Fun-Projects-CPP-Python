
your_name = input()
agents_number = int(input())
guests = input().split()
guests.append(your_name)
guests.sort()

your_index = guests.index(your_name)

wait = ((your_index // agents_number) + 1)*20

print(wait)





