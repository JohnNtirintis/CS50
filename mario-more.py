height = int(input("Height: "))

while height <= 0 or height > 8:
    height = int(input("Height: "))


num = 0
num1 = 0

for i in range(height):
    for j in range(height - num):
        print(" ", end="")
    num += 1
    print("#" * num, end = " ")
    print(" ", end="")
    for k in range(i + 1):
        num1 += 1
        print("#", end="")
    print()
