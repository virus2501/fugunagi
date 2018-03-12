# Cylinder Volume Function


def cylinder_volume(height, radius):
    pi = 3.14159
    return height * pi * radius ** 2

# TEST CASE


volume = cylinder_volume(10, 3)
print(volume)

# Pop Density Function


def pop_density(population, land_area):
    return population/land_area

# TEST CASE


test1 = pop_density(10, 1)
expected_result1 = 10
print("expected result: {}..., actual result: {}".format(expected_result1, test1))

test2 = pop_density(864816, 121.4)
expected_result2 = 7123.6902801
print("expected result: {}..., actual result {}".format(expected_result2, test2))

# Readable Time Delta Function


def readable_timedelta(days):
    return days


# TEST CASE


test1 = readable_timedelta(1)
print("There are {} weeks and {} days".format((test1//7), test1 % 7))
