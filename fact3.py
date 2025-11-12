n=int(input("Enter a number: "))
sum_sq = sum(i ** 2 for i in range(1, n + 1))
print(f"Sum of squares up to {n}² = {sum_sq}")