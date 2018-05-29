import sys

for inp in sys.stdin:
    n = int(inp.split(" ")[0])
    a = int(inp.split(" ")[1])
    ans = 0
    for i in range(1,n+1):
        ans = ans + (i * (a**i))
    print(ans)
