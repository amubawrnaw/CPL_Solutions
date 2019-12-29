import math

a = input()
b = int(a.split(" ")[0])
c = int(a.split(" ")[1])
if(math.log(b,2)<=c):
    print("Your wish is granted!")
else:
    print("You will become a flying monkey!")
