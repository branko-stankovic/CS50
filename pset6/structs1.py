import cs50
import csv
from student import Student

# mutable list, can be changed later, unlike lists in C
students = []

for i in range(3):
    print("name: ", end="")
    name = cs50.get_string()
    
    print("dorm: ", end="")
    dorm = cs50.get_string()
    
    # append is a method of a list
    students.append(Student(name, dorm))
    
file = open("students.csv", "w")
writer = csv.writer(file)
for student in students:
    writer.writerow((student.name, student.dorm))
file.close()    