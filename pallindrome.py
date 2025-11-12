# Program to check if a number is palindrome or not

num = int(input("Enter a number: "))
temp = num
rev = 0

while num > 0:
    digit = num % 10
    rev = rev * 10 + digit
    num //= 10

if temp == rev:
    print(f"{temp} is a Palindrome number.")
else:
    print(f"{temp} is not a Palindrome number.")
