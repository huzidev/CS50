from cs50 import get_string

s = get_string("Do You Agree? ")

# if s == "y" or s == "Y": #in C we used (||) for or but in as we know that python is basically more english like hence we just use (OR)
#     print("Agreed")
# elif s == "n" or s == "N":
#     print("Not Agreed")
    

#OR BY USING MORE AND MORE PERMUTATTION

# if s in ["y", "Y", "yes", "YES"]:
#     print("Agreed")
# elif s in ["n", "N", "no", "NO"]:
#     print("Not Agreed")
    
    
#OR a more better way is to use to (lower) so no matter on which size the user insert the data we'll always have the result of ours own desired


if s.lower() in ["y", "yes"]:
    print("Agreed")
elif s.lower() in ["n", "no"]:
    print("Not Agreed")
    
    
    
# or a more syntactic sugar way is that we uses .lower() at the top at variable where we created argument 
# s = get_string("...").lower()