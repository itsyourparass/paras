def calculate_square_area(side):
    return side * side

# Get input from user
side_length = float(input("Enter the side length of the square: "))

# Calculate area
area = calculate_square_area(side_length)

# Display result
print(f"The area of the square with side length {side_length} is: {area}")