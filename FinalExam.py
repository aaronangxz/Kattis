correct = []
hanh = []
count = 0
n = int(input())
for i in range(0,n):
    ans = input()
    correct.append(ans)
    ans = ''
    
hanh = correct

for i in range(0,n - 1):
    if correct[i] == hanh[i + 1]:
        count += 1

print(count)