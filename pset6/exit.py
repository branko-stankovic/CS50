import cs50
import sys

if len(sys.argv) != 2:
    print("missing command line argument!")
    # error code that it returns
    exit(1)
    
print("hello, {}!".format(sys.argv[1])) 
exit(0)