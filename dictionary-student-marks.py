students = {
    "Ayan": 87,
    "Riya": 92,
    "Faris": 95,
    "Sam": 76
}

highest = max(students, key=students.get)
print("Topper:", highest, "Marks:", students[highest])
