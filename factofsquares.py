n = int(input("Enter a number: "))
sum_fact = 0
fact = 1
for i in range(1, n + 1):
    fact *= i
    sum_fact += fact
print(f"Sum of factorials up to {n}! = {sum_fact}")