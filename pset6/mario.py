# branko stankovic
# cs 50 edX course
# https://branko-stankovic.github.io/

# cs50 library
import cs50

# forever loop, until it meets my condition
while True:
    # getting user input
    print("Height? ", end="")
    height = cs50.get_int()
    
    if height > 0 and height < 24:
        break

# setup for the top row of pyramid
hashes = 1
spaces = height - 1

# now building the pyramid!
# it is i stories high
for i in range(height):
    # making some space for mario to jump
    print(" " * spaces, end="")
    # drawing the actual blocks of pyramid
    print("#" * hashes, end="")
    # space between the two halfs of the pyramid    
    print("  ", end="")
    # and the second part of pyramid now
    print("#" * hashes, end="")
    # at each iteration, values change for the next row of pyramid
    hashes = hashes + 1  
    spaces = spaces - 1
    # end of line hack
    print(" ")