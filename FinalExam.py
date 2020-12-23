# Create empty lists, initialize count
correct = []
hanh = []
count = 0
# Input number of questions
n = int(input())
# Loop n times to input correct answers
for i in range(0,n):
    ans = input()
    # Add correct answers to list
    correct.append(ans)
    # Reset list
    ans = ''
    
# Duplicate correct answers to hanh's answers
hanh = correct

# Loop n - 1 times since hanh's answer is always one more than correct answer
for i in range(0,n - 1):
    # If the current answer matches hanh's next answer
    if correct[i] == hanh[i + 1]:
        # He got it correct
        count += 1

print(count)