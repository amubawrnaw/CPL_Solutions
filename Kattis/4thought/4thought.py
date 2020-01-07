n = int(input())

opts = ['+','-','*','//']

def loop(x):
	for k in range(4):
		for f in range(4):
			for e in range(4):
				ans = "4 "+opts[k]+" 4 "+opts[f]+" 4 "+opts[e]+" 4 "
				e = eval(ans)
				if e == x:
					ans = ans.replace("//","/")
					print(ans + "= " + str(x))
					return False
	return True

for i in range(n):
	x = int(input())

	if(loop(x)):
		print("no solution")