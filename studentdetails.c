class Student:
    def __init__(self, name, roll_no, age, grade):
        self.name = name
        self.roll_no = roll_no
        self.age = age
        self.grade = grade

    def display_details(self):
        print("\nStudent Details:")
        print(f"Name: {self.name}")
        print(f"Roll Number: {self.roll_no}")
        print(f"Age: {self.age}")
        print(f"Grade: {self.grade}")

def main():
    # Create a student object
    student1 = Student("John Doe", "A123", 15, "10th")
    student2 = Student("Jane Smith", "A124", 16, "11th")

    # Display student details
    student1.display_details()
    student2.display_details()

if __name__ == "__main__":
    main()