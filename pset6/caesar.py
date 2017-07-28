# branko stankovic
# cs 50 edX course
# https://branko-stankovic.github.io/

# cs50 library
import cs50
# system library for using arguments via sys.argv[]
import sys

# ensue proper user input
if len(sys.argv) != 2:
    print("Usage: ./caesar k")
    exit(1)

# remember the second argument as a key for ciphering
key = int(sys.argv[1])

# get plaintext from the user
print("plaintext: ", end="")
plaintext = cs50.get_string()

# set up for the ciphertext output
print("ciphertext: ", end="")

# start crypting the message!
for i in range(len(plaintext)):
    # if it is a letter
    if plaintext[i].isalpha():
        # and if it is uppercase
        if plaintext[i] <= "Z":
            # check does it go over the limit when ciphered
            if ord(plaintext[i]) + key > 90:
                print(chr(ord(plaintext[i])+key-26), end="")
            # if not just cipher it    
            else:
                print(chr(ord(plaintext[i])+key), end="")
        # and if it is lowercase  
        elif plaintext[i] <= "z":
            # check does it go over limit when ciphered
            if ord(plaintext[i]) + key > 122:
                print(chr(ord(plaintext[i])+key-26), end="")
                #print("#", end="")
            # if not, cipher it    
            else:
                print(chr(ord(plaintext[i])+key), end="")
                #print("*", end="")
    else:
        print(plaintext[i], end="")
print("")        