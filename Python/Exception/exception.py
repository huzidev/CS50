# SUPPOSE we created a variable with (int) if user insert (string) then their will be an error hence we will use (EXCEPTION) instead of if else

try:
    x = int(input("x :"))
except ValueError:
    print("That is not an int!")
    exit()
    
try:
    y = int(input("y :"))
except ValueError:
    print("That is not an int!")
    exit()
print(x + y)
    