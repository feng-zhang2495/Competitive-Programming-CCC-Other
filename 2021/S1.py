ans = 0 
numberFences = int(input())
heights = list (map (int, input().strip().split()))
widths = list (map (int, input().strip().split()))
for x in range(0, numberFences):
    ans += (heights[x]+heights[x+1])*widths[x]/2
print(ans)