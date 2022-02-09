import cs50

#if we import complete library then we've to use the name of library before every function no matter which library we've used just use complete name of that library before every function

x = cs50.get_int("x: ")
y = cs50.get_int("y: ")
z = (x + y)
print(f"the sum of x and y is {z}")