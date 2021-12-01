with open('input.txt') as file:
    lines = file.read().splitlines()

count = 0

for x in range(len(lines) - 3):
    if (int(lines[x]) + int(lines[x+1]) + int(lines[x+2])) < (int(lines[x+1]) + int(lines[x+2]) + int(lines[x+3])):
        count += 1

print(count)
