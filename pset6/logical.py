import cs50

c = cs50.get_char()

if c == 'y' or c == 'Y':
    print("yes")
elif c == 'n' or c == 'N':
    print("no")
else:
    print("error")