from cs50 import get_int

x = get_int("x: ")
y = get_int("y: ")
z = ( x / y ) #in c we'll received an int if we divide int by an int we can get the same error here as well if we use ( x // y ) by using double slashes
print(f"{z: .50f}")
# we used colon sign after (z) so we will have value next to it in 50 figures
