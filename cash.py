quarter = 25
dime = 10
nickel = 5
penny = 1

def get_cents():
    change = float(input("Change: "))
    while change <= 0:
        change = float(input("Change: "))
    if change <= .99:
        change *= 100
    elif change >= 1.00:
        change = int(change * 100)
    return change

change =  get_cents()

quarters_count = 0
while change >= quarter:
    quarters_count += 1
    change -= quarter

dimes_count = 0
while change >= dime:
    dimes_count += 1
    change -= dime
nickels_count = 0

while change >= nickel:
    nickels_count += 1
    change -= nickel

pennies_count = 0
while change >= penny:
    pennies_count += 1
    change -= penny

sum = quarters_count + dimes_count + nickels_count + pennies_count

print(sum)