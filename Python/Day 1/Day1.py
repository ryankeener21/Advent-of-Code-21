with open('input.txt') as file:
    lines = file.read().splitlines()

temp = 9999
count = 0

for x in lines:
    if int(x) > temp:
        count += 1
    temp = int(x)

print(count)
