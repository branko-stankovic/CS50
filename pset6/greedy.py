# branko stankovic
# cs 50 edX course
# https://branko-stankovic.github.io/

# cs50 library
import cs50

# forever loop, until user provides a proper input
while True:
    print("How much cash is owed to the customer?")
    cash = cs50.get_float()
    if cash > 0.00:
        break

# initialize a number of steps to return the change
steps = 0

# rounding and multiplying by 100 to get integers instead of floating point
cash = int(round(cash*100))

# first return quarters
while cash >= 25:
    cash -= 25
    steps += 1

# return dimes    
while cash >= 10:
    cash -= 10
    steps += 1

# return nickel
while cash >= 5:
    cash -= 5
    steps += 1

# return pennies    
while cash >= 1:
     cash -= 1
     steps += 1

# how much steps it took to return the change?     
print(steps)     