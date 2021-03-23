def equality(a, b, c) -> bool:
    return int(a) == int(b) or int(b) == int(c) or int(c) == int(a)


print(equality('5', 5, 6))
print(equality(1, 2, 3))