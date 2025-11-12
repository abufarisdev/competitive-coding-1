# Program to check if a number is an Armstrong number or not

num = int(input("Enter a number: "))
temp = num
digits = len(str(num))
sum_of_powers = 0

while temp > 0:
    digit = temp % 10
    sum_of_powers += digit ** digits
    temp //= 10

if num == sum_of_powers:
    print(f"{num} is an Armstrong number.")
else:
    print(f"{num} is not an Armstrong number.")
