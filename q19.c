import math

a, b, c = map(float, input("Enter a, b, and c: ").split())

if a == 0:
    print("Not a quadratic equation")
else:
    discriminant = b**2 - 4 * a * c

    if discriminant > 0:
        root1 = (-b + math.sqrt(discriminant)) / (2 * a)
        root2 = (-b - math.sqrt(discriminant)) / (2 * a)
        print("Two distinct real roots")
        print("Roots:", root1, "and", root2)

    elif discriminant == 0:
        root = -b / (2 * a)
        print("Two equal real roots")
        print("Root:", root)

    else:
        real_part = -b / (2 * a)
        imaginary_part = math.sqrt(-discriminant) / abs(2 * a)
        print("Two complex roots")
        print(f"Roots: {real_part} + {imaginary_part}i and "
              f"{real_part} - {imaginary_part}i")
