w = float(input())
h = float(input())
bmi = w/(h*h)
if bmi > 25:
    print("Overweight")
elif bmi >=18:
    print("Normal weight")
else:
    print("Underweight")