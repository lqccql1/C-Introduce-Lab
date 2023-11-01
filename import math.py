import math
def f(x):
    return math.sin(x)-(x**2)*math.cos(x)

def bisection_method(a, b, tolerance):
    if f(a) * f(b) >= 0:
        print("Không thể áp dụng phương pháp chia đôi trong khoảng này.")
        return None

    while (b - a) >= tolerance:
        c = (a*f(b)-b*f(a))/(f(b)-f(a))
        if f(c) == 0:
            return c
        if f(a) * f(c) < 0:
            b = c
        else:
            a = c

    return (a*f(b)-b*f(a))/(f(b)-f(a))

# Tìm nghiệm gần đúng của phương trình 5x^3 - x^2 - x - 1 = 0
a = -0.5
b = 2
tolerance = 0.001

approx_solution = bisection_method(a, b, tolerance)
if approx_solution is not None:
    print("Nghiệm gần đúng của phương trình là:", approx_solution)
else:
    print("Không tìm thấy nghiệm gần đúng trong khoảng cho trước.")
