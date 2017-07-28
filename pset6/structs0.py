import cs50
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
    
for student in students:
    print("{} is in {}".format(student.name, student.dorm))